class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int res_left = 0;
        int res_right = n - 1;
        vector<int> res(n);
        while (left < n) {
            if (nums[left] < pivot) {
                res[res_left] = nums[left];
                res_left++;
            }
            if (nums[right] > pivot) {
                res[res_right] = nums[right];
                res_right--;
            }
            left++;
            right--;
        }
        while (res_left <= res_right) {
            res[res_right] = pivot;
            res_right--;
        }
        return res;
    }
};
//Second Method
// 1. Reverse the entire array
// 2. Reverse first k elements
// 3. Reverse remaining n-k elements
