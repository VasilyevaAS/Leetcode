//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        priority_queue<pair<int, int>> heap;

        for (int i = 0; i < m; i++) {
            int l = 0, r = n;
            while (l < r) {
                int mid = (l + r) >> 1;
                if (mat[i][mid] == 1) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }

            if (heap.size() < k)
                heap.push(make_pair(l, i));
            else if (l < heap.top().first) {
                heap.pop();
                heap.push(make_pair(l, i));
            }
        }

        vector<int> ans;
        while (!heap.empty()) {
            ans.push_back(heap.top().second);
            heap.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
