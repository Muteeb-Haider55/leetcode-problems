class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
            
            //brute force approach
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
             return s==t;
/*
        int count[26] = {0};  // Array to store frequency of characters

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;  // Increment for s
            count[t[i] - 'a']--;  // Decrement for t
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)  // If any letter count is not balanced
                return false;
        }

        return true;

        */
    }
};
