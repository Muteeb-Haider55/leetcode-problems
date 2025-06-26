class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        pair <vector<int>,vector<int>> res;
        unordered_set <int> s1 ( nums1.begin(), nums1.end());
        unordered_set <int> s2(nums2.begin(), nums2.end());

        for(int num : s1){
            if(s2.find(num) == s2.end())
                 res.first.push_back(num);
        }
          for(int num : s2){
            if(s1.find(num) == s1.end())
                 res.second.push_back(num);
        }
       return{res.first,res.second};

    }
};