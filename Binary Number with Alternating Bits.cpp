//https://leetcode.com/problems/binary-number-with-alternating-bits/


class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n & 1;
        n >>= 1;
        while (n > 0){
            int cur = n & 1;
            if (cur == prev){
                return false;
            }
            n >>= 1;
            prev = cur;
        }
        return true;
    }
};
