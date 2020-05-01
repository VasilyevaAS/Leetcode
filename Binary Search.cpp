//https://leetcode.com/problems/binary-search/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it == nums.end()) {
            return -1;
        } else if (*it > target){
            return -1;
        } else {
            return (int)(it - nums.begin());
        }
    }
};
