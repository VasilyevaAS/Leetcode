//https://leetcode.com/problems/reverse-integer/


class Solution {
    
    static_assert(INT_MAX == 2147483647);
    static_assert(INT_MIN == -2147483647 - 1);             
    
public:
    int reverse(int x) {
        if (x == INT_MIN){
            return 0;
        }
        int sign;
        if (x >= 0){
            sign = 1;
            
        }
        else{
            sign = -1;
            x = -x;
        }
        int res = 0;
        while (x>0){
            int d = x % 10;
            x /= 10;
            if (res < INT_MAX / 10 || res == INT_MAX / 10 && d <= INT_MAX % 10)
            {
                res = res * 10 + d;
                
            }
            else {
                return 0;
            }
        }
        return res * sign;
    }
};
