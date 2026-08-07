class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>hash(nums.size()+1,0);
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }

        for(int i=1;i<hash.size();i++)
        {
            if(hash[i]==0)
            {
                answer.push_back(i);
            }
        }
    return answer;

    }
};