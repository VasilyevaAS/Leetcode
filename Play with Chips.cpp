//https://leetcode.com/problems/play-with-chips/submissions/


class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int n = chips.size();
        int x = 0;
        for (int i = 0; i < n; i++)
            x += chips[i] % 2;

        return min(x, n - x);
    }
};
