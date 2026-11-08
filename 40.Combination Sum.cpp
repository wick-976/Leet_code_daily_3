class Solution {
public:
    void comb(int idx,int target,vector<vector<int>>&ans,vector<int>& ds,vector<int> &candidates)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i-1]==candidates[i]) continue;
            if(candidates[i]>target) break;

            ds.push_back(candidates[i]);
            comb(i+1,target-candidates[i],ans,ds,candidates);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        int idx=0;
        vector<int>ds;
        comb(0,target,ans,ds,candidates);
        return ans;

    }
};