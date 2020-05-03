//https://leetcode.com/problems/binary-gap/


class Solution {
public:
    int binaryGap(int N) {
        while ((N & 1) == 0){
            N >>= 1;
        }
        N >>= 1;
        int ans = 0;
        int lastDistance = 1;
        while (N != 0){
            int bit = N & 1;
            N >>= 1;
            if (bit == 1){
                ans = max(ans, lastDistance);
                lastDistance = 1;
            } else {
                assert(bit == 0);
                lastDistance++;
            }
        }
        return ans;
    }
};
