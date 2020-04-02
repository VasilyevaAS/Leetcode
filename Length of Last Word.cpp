//https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool wordFound = false;
        if (s.size() == 0)
            return 0;
        int i = (int) s.size() -1;
        while (i >= 0){
            if (s[i] == ' '){
                i--;
            } else {
                break;
            }
        }
        for (; i >= 0; i--){
            if (s[i] != ' '){
                length++;
            } else {
                break;
            }
        }
        return length;
    }
};
