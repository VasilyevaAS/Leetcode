//https://leetcode.com/problems/height-checker/


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedHeights(heights);
        sort(heights.begin(), heights.end());
        int res = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != sortedHeights[i])
                ++res;
        }
        return res;
    }
};
