class Solution {
public:
    string makeGood(string s) {
        stack <char> st;
        string res;
        for(int i = 0; i< s.size(); i++){
            if(!st.empty() &&( s[i] == st.top()-32 || st.top() == s[i]-32 )){
                st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
       reverse(res.begin(), res.end());
       return res;



    }
};