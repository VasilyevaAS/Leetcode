//https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0; i < (int)nums.size(); i++){
            if (nums[i] != 0){
                int j = i - 1;
                while (j >= 0 && nums[j] == 0){
                    swap(nums[j + 1], nums[j]);
                    j--;
                }
            }
        }
    }
};
