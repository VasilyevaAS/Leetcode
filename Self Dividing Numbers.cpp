//https://leetcode.com/problems/self-dividing-numbers/


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res ;
        for(int i = left; i <= right ; i++){
            bool flag = true ;
            int t = i ;
            while(t){
                int d = t%10 ;
                if (d == 0 || i%d ){
                    flag = false ;
                    break ;
                }
                t /= 10 ;
            }
            if (flag)
              res.push_back(i) ;
        }
        return res ;
    }
};
