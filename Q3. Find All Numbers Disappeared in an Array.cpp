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


//optimal solution 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> copy = nums;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (copy[index] > 0)
                copy[index] *= -1;
        }

        nums.clear();

        for (int i = 0; i < copy.size(); i++) {
            if (copy[i] > 0)
                nums.push_back(i + 1);
        }

        return nums;
    }
};