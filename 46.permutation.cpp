//this code is an optimal one where we dont use the extra space
//where it swao the elements in place and return ;

class Solution {
public:
    void per(int idx,vector<vector<int>> &ans,vector<int> & nums)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            per(idx+1,ans,nums);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        per(0,ans,nums);
        return ans;
    }
};