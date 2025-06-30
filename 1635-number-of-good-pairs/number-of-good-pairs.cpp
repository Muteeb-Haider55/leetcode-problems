class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Bruteforce Approach
        /*
            int n = nums.size();
            int goodpair=0;
            for(int i = 0; i < n; i++){
                for( int j = i+1; j < n; j++){
                if(nums[i] == nums[j])
                goodpair++;
                }
            }
            return goodpair;
            */
            //Brute Force Approach
        unordered_map<int, int> freq;
        int count = 0;
        for (int num : nums) {
            if (freq.count(num)) {
                count += freq[num];
            }
            freq[num]++;
        }

        return count;
    }
};