class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string a = "aghjad";
        for (char ch : s) {
            mp[ch]++;
        }
        vector<pair<char, int>> freq;
        for (auto [ch, count] : mp) {
            freq.push_back({ch, count});
        }
        sort(freq.begin(), freq.end(),
             [](pair<char, int>& a, pair<char, int>& b) {
                 return a.second > b.second;
             });
        string result;
        for (auto [ch, count] : freq) {
            result += string(count, ch);
        }
        return result;
    }
};