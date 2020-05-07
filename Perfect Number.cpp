//https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1)
            return false;

        int tot = 0;
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0) {
                tot += i;
                if (i * i != num)
                    tot += num / i;
            }

        return tot + 1 == num;
    }
};
