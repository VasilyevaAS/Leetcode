//https://leetcode.com/problems/house-robber/


class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        vector<int>& maxSum = nums;
        if (1 < nums.size()){
            maxSum[1] = max(maxSum[0], nums[1]);
        }
        for (size_t i = 2; i < nums.size(); i++){
            maxSum[i] = max(nums[i] + maxSum[i -2], maxSum[i -1]);
        }
        return maxSum.back();
    }
};
