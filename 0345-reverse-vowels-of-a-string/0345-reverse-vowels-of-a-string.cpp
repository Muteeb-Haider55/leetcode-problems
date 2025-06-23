class Solution {
    bool isVowel(char a){
        a=tolower(a);
        return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    }
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left< right){
            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if(!isVowel(s[left]))
            left++;
            else if(!isVowel(s[right]))
            right--;
        }
        return s;
    }
};