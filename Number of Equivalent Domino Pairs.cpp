//https://leetcode.com/problems/number-of-equivalent-domino-pairs/

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        unordered_map<string, int> visited;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x = dominoes[i][0], y = dominoes[i][1];
            if (x > y)
                swap(x, y);

            string h(to_string(x) + to_string(y));
            if (visited.find(h) != visited.end()) {
                ans += visited[h];
                visited[h]++;
            } else {
                visited[h] = 1;
            }
        }
        return ans;
    }
};
