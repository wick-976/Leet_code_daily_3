class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> multiples;
        
        // Keep only multiples of k
        for (int num : nums) {
            if (num % k == 0) {
                multiples.insert(num);
            }
        }

        // Find the smallest missing multiple of k
        int candidate = k;
        while (true) {
            if (multiples.find(candidate) == multiples.end()) {
                return candidate;
            }
            candidate += k;
        }
    }
};
