class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Frequency array for 26 lowercase letters
        int freq[26] = {0};
        
        // Count letters in magazine
        for (char c : magazine) {
            freq[c - 'a']++;
        }
        
        // Check if ransomNote can be formed
        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0) {
                return false; // letter not available
            }
            freq[c - 'a']--; // use one occurrence
        }
        
        return true;
    }
};


//first we are counting the letters in the magazine ans then we are checking if the ransomNote can be formed using those letters. If any letter in the ransomNote is not available in the magazine, we return false. Otherwise, we return true after checking all letters.
