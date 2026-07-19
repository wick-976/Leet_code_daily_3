class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int ans = 0;

        // Count frequencies
        for (int n : nums) {
            freq[n]++;
        }

        // Find the element that appears once
        for (auto &p : freq) {
            if (p.second == 1) {
                ans = p.first;
                break;  // stop once found
            }
        }

        return ans;
    }
};
