class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prevCount = 0;
        int currCount = 0;
        for (int num : nums) {
            if (num == 1) {
                currCount++;
                prevCount = max(prevCount, currCount);
            } else
                currCount = 0;
        }
        return prevCount;
    }
};