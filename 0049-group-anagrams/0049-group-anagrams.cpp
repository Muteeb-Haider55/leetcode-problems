class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> mp;
       for(string str : strs){
        string temp = str;
        sort(str.begin(), str.end());
        mp[str].push_back(temp);
       }
       vector <vector<string>> res;
       for(auto pair : mp){
        res.push_back(pair.second);

       }
       return res;
    }
};