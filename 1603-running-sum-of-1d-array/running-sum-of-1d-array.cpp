class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Optimized Aproach
       
       for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
        
        // Brute Force Approach
       /* 
        vector <int> res = nums;
        int n = nums.size();
        for(int i=1; i<n; i++){
            res[i] += res[i-1];
        }
        return res;
        */ 
    }
};