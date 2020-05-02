//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = INT_MAX;
        for (int v : nums){
            min = std::min(min, v);
        }
        int sum = 0;
        for (int v : nums){
            sum += v - min;
        }
        return sum;
    }
};
