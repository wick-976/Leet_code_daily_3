class Solution {
public:
    int findGCD(vector<int>& nums) {

        int max_number=nums[0];
        int min_number=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min_number) min_number=nums[i];

            if(nums[i]>max_number) max_number=nums[i];
        }

        int temp;
        while(min_number!=0)
        {
            temp=min_number;
            min_number=max_number % min_number;
            max_number=temp;
        }
        
    return temp;
    }
};