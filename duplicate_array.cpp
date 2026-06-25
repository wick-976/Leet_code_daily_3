
//solving the problem of removing duplicates from a sorted array where using two pointer by 
//placing the elements in the increasing order with help of postion varaible 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int position=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[position]=nums[i];
                position++;
            }
        }

        return position;
        
    }
};