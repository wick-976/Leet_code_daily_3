class Solution {
public:

     void reverse(int start,int end,vector<int>&nums){
            while(start<end)
            {
                swap(nums[start++],nums[end--]);
            }
        }
    void rotate(vector<int>& nums, int k) { 
        int size=nums.size();
        k=k%size;
        int calc=size-k;
        reverse(0,calc-1,nums);
        reverse(calc,size-1,nums);
        reverse(0,size-1,nums);


    }
};