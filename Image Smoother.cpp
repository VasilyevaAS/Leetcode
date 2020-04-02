//https://leetcode.com/problems/image-smoother/


class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
     int n = M.size(), m = M[0].size();
        vector<vector<int>> ans(M);
        int dx[9] = {-1, -1, -1, 0, 1, 1, 1, 0, 0};
        int dy[9] = {-1, 0, 1, 1, 1, 0, -1, -1, 0};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                int tot = 0, cnt = 0;
                for (int k = 0; k < 9; k++) {
                    int x = i + dx[k], y = j + dy[k];
                    if (x >= 0 && x < n && y >= 0 && y < m) {
                        tot += M[x][y];
                        cnt++;
                    }
                }
                ans[i][j] = tot / cnt;
            }
        return ans;
    }
};
