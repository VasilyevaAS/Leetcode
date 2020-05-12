//https://leetcode.com/problems/buddy-strings/

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length()) {
            return false;
        }
    
        int diff_cnt = 0;
        int idxs[20005] = { 0, 0 };
        for (int i = 0; i < A.length(); ++i) {
            if (A[i] != B[i]) {
                idxs[diff_cnt++] = i;

            }
        }
        if (diff_cnt == 0) {
            map<char, bool> m;
            for (auto &ch : A) {
                if (m[ch]) {
                    return true;
                }
                else {
                    m[ch] = true;
                }
            }
            return false;
        }
        if (diff_cnt != 2) {
            return false;
        }
        swap(A[idxs[0]], A[idxs[1]]);
        return A == B;
    }
};
