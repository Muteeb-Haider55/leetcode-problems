class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3)    // to prevent the pointer out of bound
            return 0;
        int goodStringCount = 0;
        for (int i = 0; i < s.size() - 2;
             i++) { // why n-2 to prevent out of bound
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                goodStringCount++;
            }
        }
        return goodStringCount;
    }
};