//https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/


class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        if (n & 1)
            res[n - 1] = 0;

        for (int i = 0; i < n / 2; i++) {
            res[i] = i + 1;
            res[i + n / 2] = -i - 1;
        }
        return res;
    }
};
