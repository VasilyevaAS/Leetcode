//https://leetcode.com/problems/power-of-four/


class Solution {
public:
    bool isPowerOfFour(int num) {
        if (!(num > 0 && (num & (num - 1)) == 0)){
            return false;
        }
        int sq = (int)round(sqrt(num));
        return sq * sq == num;
    }
};
