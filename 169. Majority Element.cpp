class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int maxi=nums[0];
        int size=nums.size();
        int count=1;

        for(int i=1;i<size;i++)
        {
            if(nums[i]==maxi) count++;
            else count--;

            if(count==0)
            {
                maxi=nums[i];
                count=1;
            }
        }

    return maxi;
        
    }
};
