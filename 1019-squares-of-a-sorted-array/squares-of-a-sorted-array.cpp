class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int right = n - 1;
        int pos = n - 1;
        vector<int> result (nums.size());
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];
                left++;
            } else {
                result[pos] = nums[right] * nums[right];
                right--;
            }
            pos--;
        }
        return result;
        // Using range-based for loop with reference (&)
        // to modify the original vector in-place.
        /*
        for(auto &num : nums){
            num *= num;
        }
        */

        // ❌ This below version does NOT work for in-place modification:
        // for(int num : nums){
        //     num *= num; // 'num' here is a copy of each element — the
        //     original 'nums' remains unchanged
        // }

        // ✔️ A simple classic for loop could also be used:
        // for(int i = 0; i < nums.size(); i++){
        //     nums[i] *= nums[i]; // Directly modifies original elements using
        //     index access
        // }

        // Sorting the squared values in-place

        // sort(nums.begin(), nums.end());
        // return nums;

        // usig two pointer approach
    }
};
