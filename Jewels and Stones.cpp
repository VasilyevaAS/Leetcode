//https://leetcode.com/problems/jewels-and-stones/


class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ret =0;
        set<char>set;
        for(int i = 0;i<J.length();i++)
            set.insert(J[i]);
        for(int i = 0;i<S.length();i++)
            if(set.count(S[i]))
                ret++;

        return ret;
    }
};
