class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        int left = 0;
        int right = n;
        vector<int> result(m);
        for (int i = 0; i < m; i++) {
            if (i % 2 == 0) {
                result[i] = (nums[left++]);
            } else
                result[i] = (nums[right++]);
        }

        return result;
    }
};