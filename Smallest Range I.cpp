//https://leetcode.com/problems/smallest-range-i/

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mx = A[0], mn = A[0];
        for (int num : A) {
            mx = max(mx, num);
            mn = min(mn, num);
        }
        return max(0, mx - mn - 2 * K);
    }
};
