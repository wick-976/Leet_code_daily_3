class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        // Start from the last digit and move backwards
        for (int i = size - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;   // just increment and return
                return digits;
            }
            digits[i] = 0;        // set to 0 and carry over
        }

        // If we finished the loop, it means all digits were 9
        // Example: [9,9,9] → [0,0,0] → need to add a leading 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
