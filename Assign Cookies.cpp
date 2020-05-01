//https://leetcode.com/problems/assign-cookies/


class Solution {
public:
    int findContentChildren(vector<int> g, vector<int> s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gi = 0;
        int ans = 0;
        for (int sz : s){
            if (gi < (int)g.size() && sz >= g[gi]){
                ans++;
                gi++;
            }
        }
        return ans;
    }
};
