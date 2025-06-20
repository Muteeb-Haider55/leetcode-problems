class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force Approach
        /*
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target)
                return {i, j};
            }
        }
        return {};
        */
        // Optimized Approach
        unordered_map<int, int> check;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (check.find(diff) != check.end()) {
                return {i, check[diff]};
            } else {
                check.insert({nums[i], i});
            }
        }
        return {};
    }
};