class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int num : arr) {
            mp[num]++;
        }
        unordered_set<int> seenfreq;
        for (auto [num, count] : mp) {
            if (seenfreq.count(count))
                return false;
            seenfreq.insert(count);
        }
        return true;
    }
};