//https://leetcode.com/problems/palindromic-substrings/



class Solution {
public:
    int countSubstrings(string_view s) {
        int count = 0;
        for (int first = 0; first < (int)s.size(); first++){
            for (int last = first; last < (int)s.size(); last++){
                bool good = true;
                int i = first;
                int j = last;
                while (i < j){
                    if (s[i] != s[j]){
                        good = false;
                        break;
                    }
                    i++;
                    j--;
                }
                if (good){
                    count++;
                }
            }
        }
        return count;
    }
};
