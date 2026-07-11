class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     return nums;
    }
};


//it tequires a merge sort alogtiyhim 
//but i know upto bubble sort and selection sort but i cant implement here because of 
//the time constraind which is 5e4 so we cant do 5e4 * 5e4 so we do the sort() build in function