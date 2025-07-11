class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i = 0; i< s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else if( s[i]==')'){
                    if(!st.empty()&&st.top()=='('){
                        st.pop();
                    }
                    else return false;
            }
            else if( s[i]=='}'){
                 if( !st.empty()&&st.top()=='{'){
                        st.pop();
                    }
                    else return false;

            }
            else if( s[i]==']'){
                    if( !st.empty() && st.top()=='['){
                        st.pop();
                    }
                    else return false;
            }

        }
        return st.empty();

    }
};


//Optimize and clean code 
/*class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
*/