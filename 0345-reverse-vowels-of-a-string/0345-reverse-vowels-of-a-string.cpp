class Solution {
public:
    bool isVowel(char a) {
        a = tolower(a);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            return true;

        return false;
    }
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (isVowel(s[left]) && isVowel(s[right])) {
                swap(s[left], s[right]);
                left++;
                right--;
            } else if (!isVowel(s[left]))
                left++;
            else
                right--;
        }
        return s;
    }
};