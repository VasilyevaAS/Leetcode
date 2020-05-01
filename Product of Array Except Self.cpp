//https://leetcode.com/problems/product-of-array-except-self/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0] = 1;
        for (int i = 1; i < (int)nums.size(); i++){
            ans[i] = ans[i - 1] * nums[i - 1];
            
        }
        int suf = 1;
        for (int i = (int)nums.size() - 2; i >= 0; i--){
            suf *= nums[i + 1];
            ans[i] *= suf;
        }
        return ans;
    }
};
