//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;

        for (int i = 0, j = n - 1; i < m; i++) {
            while (j >= 0 && grid[i][j] < 0)
                j--;
            ans += n - 1 - j;
        }

        return ans;
    }
};
