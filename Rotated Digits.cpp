//https://leetcode.com/problems/rotated-digits/


class Solution {
private:
    bool isValid(int N) {
        unordered_set<int> record{0, 1, 2, 5, 6, 8, 9};
        if (record.count(N)) return true;
        return false;
    }
    bool isGood(int N) {
        unordered_set<int> digits;
        while (N > 0) {
            int n = N % 10;
            if (!isValid(n)) return false;
            digits.insert(n);
            N /= 10;
        }
        for (auto &i : {0, 1, 8})
            if (digits.count(i)) digits.erase(i);
        return !digits.empty();
    }
public:
    int rotatedDigits(int N) {
        int count = 0;
        for (int i = 1; i <= N; ++ i)
            if (isGood(i)) count += 1;
        return count;
    }
};
