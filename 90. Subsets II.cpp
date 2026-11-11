class Solution {
public:

    void sub(int idx,int size,vector<vector<int>>& answer,vector<int>& ds,vector<int>& nums)
    {

        answer.push_back(ds);

        for(int i=idx;i<size;i++)
        {
            if(i!=idx && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            sub(i+1,size,answer,ds,nums);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>answer;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        sub(0,nums.size(),answer,ds,nums);
        return answer;
    }
};
