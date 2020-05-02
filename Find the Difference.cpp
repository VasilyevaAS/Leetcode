//https://leetcode.com/problems/find-the-difference/


class Solution {
public:
    char findTheDifference(const string &s, const string &t) {
        unordered_map<char, int> count;
        for (char c : s){
            count[c]--;
        }
        for (char c : t){
            count[c]++;
        }
        for (auto kv : count){
            if (kv.second == 1){
                return kv.first;
            }
        }
        throw invalid_argument("not 1 letter diff");
    }
};
