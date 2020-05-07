//https://leetcode.com/problems/largest-number-at-least-twice-of-others/



class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxNum=-1;
        int maxIndex;
        int lastMaxNum=-1;
        for(int i=0; i < nums.size(); i++) {
            if(nums[i] >= lastMaxNum) {
                lastMaxNum = nums[i];
                if(nums[i] > maxNum) {
                    lastMaxNum = maxNum;
                    maxNum = nums[i];
                    maxIndex = i;
                }
            }
        }
        if(maxNum < 2*lastMaxNum) {
            return -1;
        }
        return maxIndex;
    }
};
