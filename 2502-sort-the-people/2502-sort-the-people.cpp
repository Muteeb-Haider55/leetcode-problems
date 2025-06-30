class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> ages;
        vector<string> output;
        for (int i = 0; i < names.size(); i++) {
            ages[heights[i]] = names[i];
        }
        for (auto it = ages.rbegin(); it != ages.rend(); it++) {
            output.push_back(it->second);
        }

        return output;
    }
};