class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>freq;

        int size=nums.size();

        for(int i=0;i<size;i++)
        {
            if(freq[nums[i]] >0)
            {
                return true;
            }
            freq[nums[i]]++;
        }
        
    return false;
    }
};