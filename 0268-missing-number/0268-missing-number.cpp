class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Brute Force Approach
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i != nums[i])
                return i;
        }
        return nums.size();
    }
};