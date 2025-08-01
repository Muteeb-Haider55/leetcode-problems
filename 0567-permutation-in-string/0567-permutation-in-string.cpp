class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // Edge case
        if (s1.size() > s2.size())
            return false;
        unordered_map<char, int> set1;
        unordered_map<char, int> set2;
        int left = 0;
        int right = 0;
        for (int i = 0; i < s1.size(); i++) {
            set1[s1[i]]++;
            set2[s2[i]]++;
        }
        for (int right = s1.size(); right < s2.size(); right++) {
            if (set1 == set2)
                return true;
            set2[s2[right]]++;
            set2[s2[left]]--;
            if (set2[s2[left]] == 0)
                set2.erase(s2[left]);
            left++;
        }
        return set1 == set2;
    }
};