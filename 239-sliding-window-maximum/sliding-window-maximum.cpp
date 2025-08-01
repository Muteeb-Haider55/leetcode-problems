class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;
        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for (int i = k; i < nums.size(); i++) {
            res.push_back(nums[dq.front()]);
            // remove those element that are not the part of window

            while (dq.size() > 0 && dq.front() <= i - k) {
                dq.pop_front();
            }

            // remove the less val elements
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
    }
};