class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> hash(26, 0);

        // Count frequency of each character in s
        for (char c : s) {
            hash[c - 'a']++;
        }

        // Subtract frequency using t
        for (char c : t) {
            hash[c - 'a']--;
        }

        // If all counts are zero, it's an anagram
        for (int count : hash) {
            if (count != 0) return false;
        }

        return true;
    }
};
