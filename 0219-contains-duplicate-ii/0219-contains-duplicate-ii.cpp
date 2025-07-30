class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> storeUnique;
       
        for (int i = 0; i < nums.size(); i++) {
            if (storeUnique.find(nums[i]) != storeUnique.end() &&
                abs(storeUnique[nums[i]] - i) <= k) {
                return true;
            } else {
                storeUnique[nums[i]] = i;
            }
        }
        return false;
    }
};