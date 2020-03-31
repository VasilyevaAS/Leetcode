//https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p;
        if (numRows == 0)
            return p;
        vector<int> curr{1};
        p.push_back(curr);
        if (numRows == 1)
            return p;
        for (int i = 1; i < numRows; ++i){
            curr.clear();
            curr.push_back(1);
            for (int prev = 1; prev < p[i - 1].size(); ++prev){
                curr.push_back(p[i-1][prev - 1] + p[i - 1][prev]);
            }
            curr.push_back(1);
            p.push_back(curr);
            
        }
        return p;
    }
};
