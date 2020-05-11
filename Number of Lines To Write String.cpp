//https://leetcode.com/problems/number-of-lines-to-write-string/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines = 1, width = 0;
        for (char s: S) {
            if (width + widths[s - 'a'] <= 100) {
                width += widths[s - 'a'];
            }
            else {
                lines++;
                width = widths[s - 'a'];
            }
        }
        vector<int> ans;
        ans.push_back(lines);
        ans.push_back(width);
        return ans;
    }
};
