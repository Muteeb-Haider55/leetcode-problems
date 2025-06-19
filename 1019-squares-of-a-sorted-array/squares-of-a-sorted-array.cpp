class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        // Using range-based for loop with reference (&)
        // to modify the original vector in-place.
        for(auto &num : nums){
            num *= num;
        }

        // ❌ This below version does NOT work for in-place modification:
        // for(int num : nums){
        //     num *= num; // 'num' here is a copy of each element — the original 'nums' remains unchanged
        // }

        // ✔️ A simple classic for loop could also be used:
        // for(int i = 0; i < nums.size(); i++){
        //     nums[i] *= nums[i]; // Directly modifies original elements using index access
        // }

        // Sorting the squared values in-place
       
        sort(nums.begin(), nums.end());
        return nums;
    }
};
