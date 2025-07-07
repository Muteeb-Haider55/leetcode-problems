class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        while (odd < nums.size() && even < nums.size()) {
            while (even < nums.size() && nums[even] % 2 == 0) {
                even += 2;
            }
            while (odd < nums.size() && nums[odd] % 2 != 0) {
                odd += 2;
            }
            if (odd < nums.size() && even < nums.size() &&
                nums[even] % 2 != 0 && nums[odd] % 2 == 0) {
                swap(nums[even], nums[odd]);
            }
        }
        return nums;
    }
};