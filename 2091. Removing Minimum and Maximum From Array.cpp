class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=0;
        int mini=0;
        for(int i=0;i<nums.size();i++)
        {

            if(nums[i]>nums[maxi])
            {
                maxi=i;
            }
            if(nums[i]<=nums[mini])
            {
                mini=i;
            }
        }
        
        int maximum=max(maxi,mini);
        int minimum=min(mini,maxi);
        int first_row=maximum+1;
        int second_row=nums.size()-minimum;
        int hybrid_row=minimum+(nums.size()-maximum)+1;

        return min({first_row,second_row,hybrid_row});

       


    }
};