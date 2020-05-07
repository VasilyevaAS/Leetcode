//https://leetcode.com/problems/unique-binary-search-trees/

class Solution {
public:
    int numTrees(int n) {
        vector<vector<int>> count(1 + n + 1, vector<int>(1 + n, 1));
        for (int len = 1; len <= n; len++){
            for (int left = 1; left + len - 1 <= n; left++){
                int right = left + len - 1;
                count[left][right] = 0;
                for (int mid = left; mid <= right; mid++){
                    count[left][right] += count[left][mid - 1] * count[mid + 1][right];
                }
            }
        }
       return count[1][n]; 
    }
};
