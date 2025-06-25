class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first = 0, second = 0;
        while(first<s.length() && second < t.length() ){
            if(s[first] == t[second]){
                first++;
                second++;
            }
            else
            second++;
        }
        return first == s.length();
    }
};