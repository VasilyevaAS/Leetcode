//https://leetcode.com/problems/backspace-string-compare/


class Solution {
    
    void norm(string &s){
        int dst = 0;
        for (char c : s){
            if (c == '#'){
                if (dst > 0){
                    dst--;
                }
            } else {
                assert ('a' <= c && c <= 'z');
                s[dst] = c;
                dst++;
            }
        }
        s.resize(dst);
    }
    
public:
    bool backspaceCompare(string S, string T) {
        norm(S);
        norm(T);
        return S == T;
    }
};
