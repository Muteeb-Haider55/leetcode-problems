

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string res;
//         for (char c : s) {
//             if (isalnum(c))
//                 res += tolower(c);
//         }
//         int left = 0;
//         int right = res.size() - 1;
//         while (left < right) {
//             if (res[left] != res[right])
//                 return false;
//             left++;
//             right--;
//         }
//         return true;
//     }
// };



class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (!isalnum(s[left]) && left < right) {
                left++;
            }
            while(!isalnum(s[right]) && left < right) {
                right--;
               
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
