class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_res;
        string t_res;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='#'){
                if(!s_res.empty())s_res.pop_back();
            }
            else
            s_res.push_back(s[i]);
        }
         for(int i = 0; i<t.size(); i++){
            if(t[i]=='#'){
                if(!t_res.empty())t_res.pop_back();
            }
            else
            t_res.push_back(t[i]);
        }

       return s_res==t_res;
    }
};