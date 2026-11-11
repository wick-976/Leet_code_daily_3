//this sloution is not an optimal one beacuse it use an extra 
//space where the optimal solution doesnt take an extra space 

class Solution {
public:

    void permutation(vector<vector<int>>& ans,vector<int>& ds,vector<int>& freq,vector<int>& nums)

    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                permutation(ans,ds,freq,nums);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>freq(nums.size(),0);
        permutation(ans,ds,freq,nums);
        return ans;
    }
};











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