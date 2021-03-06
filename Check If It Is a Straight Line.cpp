//https://leetcode.com/problems/check-if-it-is-a-straight-line/


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int x = coordinates[1][0] - coordinates[0][0];
        int y = coordinates[1][1] - coordinates[0][1];

        for (int i = 2; i < n; i++)
            if ((coordinates[i][0] - coordinates[0][0]) * y 
                != (coordinates[i][1] - coordinates[0][1]) * x)
                return false;

        return true;
    }
};
