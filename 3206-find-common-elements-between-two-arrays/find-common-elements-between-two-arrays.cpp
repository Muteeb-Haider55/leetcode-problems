class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0;
        int ans2 = 0;

       unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        for (int num:nums1) {
            if (s2.count(num)){
                ans1++;
            }
                
        }
        for (int num : nums2) {
            if (s1.count(num))
                ans2++;
        }
        return {ans1, ans2};
    }
};