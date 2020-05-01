//https://leetcode.com/problems/detect-capital/


class Solution {
    
    bool isLower(char c){
        return 'a' <= c && c <= 'z';
    }
    
    bool isUpper(char c){
        return 'A' <= c && c <= 'Z';
    }
    
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1){
            return true;
        }        
        if (isLower (word[0])){
            for (int i = 1; i < (int)word.size(); i++){
                if (!isLower(word[i])){
                    return false;
                }
            }                
        } else {
            assert (isUpper(word[0]));
            if (isLower(word[1])){
                for (int i = 2; i < (int)word.size(); i++){
                    if (!isLower(word[i])){
                        return false;
                    }
                }
            } else {
                assert(isUpper(word[1]));
                for (int i = 2; i < (int)word.size(); i++){
                    if (!isUpper(word[i])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
