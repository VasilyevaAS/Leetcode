//https://leetcode.com/problems/maximum-product-of-three-numbers/



class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        nth_element(nums.begin(), nums.begin() + 1, nums.end());
        int nums0 = nums[0];
        int nums1 = nums[1];
        nth_element(nums.begin(), nums.end() - 3, nums.end());
        sort(nums.end() - 3, nums.end());
        int sz = (int)nums.size();
        return max(nums0 * nums1 * nums[sz - 1], nums[sz - 3] * nums[sz - 2] * nums[sz - 1]);
    }
};
