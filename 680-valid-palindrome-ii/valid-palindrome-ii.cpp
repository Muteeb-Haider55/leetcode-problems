class Solution {
    bool isPalindrom(int left, int right, string s) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            } else {
                left++;
                right--;
            }
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (left < right && s[left] != s[right])
                return isPalindrom(left + 1, right, s) ||
                       isPalindrom(left, right - 1, s);
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};