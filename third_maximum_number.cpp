//the solution is to keep track of the every lement easch step we check for the greatest 
//elemts it exits so we update that values arr[i] to fd so fd value goes to sd and sd goes to td

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long fd = LLONG_MIN;
        long long sd = LLONG_MIN;
        long long td = LLONG_MIN;

        for (int num : nums) {

            if (num > fd) {
                td = sd;
                sd = fd;
                fd = num;
            }
            else if (num > sd && num != fd) {
                td = sd;
                sd = num;
            }
            else if (num > td && num != fd && num != sd) {
                td = num;
            }
        }

        if (td == LLONG_MIN)
            return (int)fd;

        return (int)td;
    }
};