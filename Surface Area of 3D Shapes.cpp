//https://leetcode.com/problems/surface-area-of-3d-shapes/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res = 0;
        int N = grid.size();
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                res += grid[i][j] * 6 - max(0, grid[i][j] - 1) * 2;
                if (i != 0) {
                    res -= min(grid[i - 1][j], grid[i][j]) * 2;
                }
                if (j != 0) {
                    res -= min(grid[i][j - 1], grid[i][j]) * 2;
                }
            }
        }
        return res;
    }
};
