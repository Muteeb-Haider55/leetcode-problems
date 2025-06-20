class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> res (nums.size()*2);
        int n = nums.size();
        for (int i = 0; i < n; i++ ){
            res[i] = nums[i];
            res[i+n] = nums[i];
        }
        return res;
    }
};