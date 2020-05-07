//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
 
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        unordered_map<int, int> r, c;
        int cnt_r = 0, cnt_c = 0;
        for (const auto &v : indices) {
            int &vr = r[v[0]], &vc = c[v[1]];
            vr ^= 1; vc ^= 1;
            cnt_r += (vr & 1) ? 1 : -1;
            cnt_c += (vc & 1) ? 1 : -1;
        }

        return cnt_r * (m - cnt_c) + cnt_c * (n - cnt_r);
    }
};
