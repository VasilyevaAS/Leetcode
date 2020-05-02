//https://leetcode.com/problems/excel-sheet-column-title/


class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while (n > 0){
            ans.push_back((n - 1) % 26 + 'A');
            n = (n - 1) / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
