class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for (char c : s) {
            if (isalnum(c))
                res += tolower(c);
        }
        int left = 0;
        int right = res.size() - 1;
        while (left < right) {
            if (res[left] != res[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};