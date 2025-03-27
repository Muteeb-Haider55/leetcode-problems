class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum = 0;
        int maxalt = 0;
        for (int i = 0; i < gain.size(); i++) {
            maximum += gain[i];
            maxalt = max(maximum, maxalt);
        }
        return maxalt;
    }
};