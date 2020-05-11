//https://leetcode.com/problems/repeated-string-match/


class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int count = 0;
        string str;
        while (str.size() < B.size()){    
            str.append(A);
            count++;
        }
        if (str.find(B) != -1){
            return count;
        }
        str.append(A);            
        if (str.find(B) != -1){   
            return ++count;
        }
        return -1;
    }
};
