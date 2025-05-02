class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Brute Force Approach
        /*  int count = 0;
         int n = nums.size();
         for(int i=0; i<n; i++){
             int sum=0;
             for(int j=i; j<n; j++){
                 sum+=nums[j];
                 if(sum==k) count++;
             }
         }
         return count;*/
        // Optimized Approach
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int count = 0, sum = 0;
        for (int num : nums) {
            sum += num;
            if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[sum - k];
            }
            prefixSumCount[sum]++;
        }

        return count;
    }
};