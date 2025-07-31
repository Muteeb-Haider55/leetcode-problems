class Solution {
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int currMaxVowels = 0;
        int MaxVowels = 0;
        while (right < s.size()) {
           
            if (isVowel(s[right])) {
                currMaxVowels++;
            }
            if (right - left + 1 > k) {
                if (isVowel(s[left])) {
                    currMaxVowels--;
                }
                left++;
            }
            right++;
             MaxVowels = max(currMaxVowels, MaxVowels);
        }
        return MaxVowels;
    }
};