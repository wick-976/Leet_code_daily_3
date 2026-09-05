class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> max_array(n), min_array(n);

        max_array[0] = nums[0];
        for (int i = 1; i < n; i++) {
            max_array[i] = max(nums[i], max_array[i-1]);
        }


        min_array[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            min_array[i] = min(nums[i], min_array[i+1]);
        }


        for (int i = 0; i < n; i++) {
            int stable_score = max_array[i] - min_array[i];
            if (stable_score <= k) return i;
        }

        return -1;
    }
};
