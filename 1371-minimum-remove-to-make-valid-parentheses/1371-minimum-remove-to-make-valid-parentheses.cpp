class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> bracketIndex;
        string res;
        unordered_set<int> indexes;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                bracketIndex.push(i);
            } else if (s[i] == ')') {
                if (bracketIndex.empty()) {
                    indexes.insert(i);
                } else {
                    bracketIndex.pop();
                }
            }
        }

        while (!bracketIndex.empty()) {

            indexes.insert(bracketIndex.top());
            bracketIndex.pop();
        }
        for (int i = 0; i < s.size(); i++) {
            if (indexes.find(i) != indexes.end()) {
                continue;
            } else {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};