class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> numMap;
        for (int num : nums) {
            numMap[num]++;
        }
        for (auto it : numMap) {
            if (it.second > (nums.size() / 3)) {
                result.push_back(it.first);
            }
        }
        return result;
    }
};