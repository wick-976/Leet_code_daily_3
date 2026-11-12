class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int size=nums.size();
        int up=1;
        int down=1;
        int maxi=1;

        for(int i=1;i<size;i++)
        {
            if(nums[i]>nums[i-1])
            {
                down=1;
                up++;
            }
            else if(nums[i]<nums[i-1])
            {
                down++;
                up=1;
            }
            else
            {
                down=1;
                up=1;
            }
            maxi=max(maxi,max(up,down));
        }
        
    return maxi;
    }
};