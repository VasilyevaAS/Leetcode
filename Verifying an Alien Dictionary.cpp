//https://leetcode.com/problems/verifying-an-alien-dictionary/


class Solution {
    
    int compare(const string &left, const string &right, const vector<int> & pos) {
        for (int i = 0; i < (int)left.size() && i < (int)right.size(); i++){
            int diff = pos[left[i] - 'a'] - pos[right[i] - 'a'];
            if (diff != 0){
                return diff;
            }
        }
        return (int)left.size() - (int)right.size();
    }
    
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos('z' - 'a' + 1);
        for (int i = 0; i < (int)order.size(); i++){
            pos[order[i] - 'a'] = i;
            
        }
        for (int i = 1; i < (int)words.size(); i++){
            if (compare(words[i -1], words[i], pos) > 0){
                return false;
            }
        }
        return true;
    }
};
