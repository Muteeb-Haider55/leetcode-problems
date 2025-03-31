class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=0;
        int y=n;
        vector <int> res (nums.size());
        for(int i=0; i < nums.size(); i++){
            if(i % 2 == 0 ){
                res[i]=nums[x++];
            }
            else
            res[i] = nums[y++];
        }
        return res;

    }
};