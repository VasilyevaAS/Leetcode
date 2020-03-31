//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int x : nums){
            int i = abs(x) - 1;
            if (nums[i] > 0){
                nums[i] = -nums[i];
            }
        }
        vector<int> ans;
        for (int v = 1; v <= (int)nums.size(); v++){
            int i = v - 1;
            if (nums[i] > 0){
                ans.push_back(v);
            }
        }
        return ans;
    }
};
