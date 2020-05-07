//https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution {
public:
    bool is_lucky(int x, int y, const vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++)
            if (matrix[i][y] > matrix[x][y])
                return false;
        for (int j = 0; j < n; j++)
            if (matrix[x][j] < matrix[x][y])
                return false;
        return true;
    }

    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (is_lucky(i, j, matrix))
                    ans.push_back(matrix[i][j]);
        return ans;
    }
};
