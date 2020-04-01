//https://leetcode.com/problems/max-consecutive-ones/



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        int maximum = 0;
        int curr = 0;
        
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == 1){
                ++curr;
                maximum = max(maximum, curr);
            } else {
                curr = 0;
            }
        }
        return maximum;
    }
};
