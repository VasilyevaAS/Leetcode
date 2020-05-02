//https://leetcode.com/problems/power-of-three/


class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1'162'261'467 % n == 0;
    }
};
