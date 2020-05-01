//https://leetcode.com/problems/letter-case-permutation/



class Solution {
public:
    vector<string> letterCasePermutation(const string &S) {
        vector<string> ans;
        ans.push_back("");
        for (char c : S){
            if ('0' <= c && c <= '9'){
                for (string &p : ans){
                    p.push_back(c);
                }
            } else {
                char lower;
                char upper;
                if ('a' <= c && c <= 'z'){
                    lower = c;
                    upper = (char)(c - 'a' + 'A');
                } else {
                    assert('A' <= c && c <= 'Z');
                    upper = c;
                    lower = (char)(c - 'A' + 'a');
                }
                int size = ans.size();
                for (int i = 0; i < size; i++){
                    ans.push_back(ans[i]);
                    ans[i].push_back(lower);
                    ans[i + size].push_back(upper);
                }
            }
        }
        return ans;
    }
};
