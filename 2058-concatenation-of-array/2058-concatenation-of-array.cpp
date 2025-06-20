class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // According to question statement
        vector <int> res (nums.size()*2);
        int n = nums.size();
        for (int i = 0; i < n; i++ ){
            res[i] = nums[i];
            res[i+n] = nums[i];
        }
        return res;
        /* optimized in place solution
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
        */
    }
};