class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
       int n = nums.size();
       k=k%n;

       int left=0;
       int right=n-1;
       while(left<right){
        swap(nums[left], nums[right]);
        left++;
        right--;
       }
       left=0;
       right = k-1;
       while(left<right){
         swap(nums[left], nums[right]);
         left++;
         right--;
       }
       left = k;
       right = n-1;
       while(left<right){
        swap(nums[left], nums[right]);
        left++;
        right--;
       }

    }
};
//Second Method
// 1. Reverse the entire array
// 2. Reverse first k elements
// 3. Reverse remaining n-k elements
