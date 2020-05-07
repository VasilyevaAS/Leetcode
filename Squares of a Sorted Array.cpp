//https://leetcode.com/problems/squares-of-a-sorted-array/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res;
        for (int a : A) {
            res.push_back(a * a);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
