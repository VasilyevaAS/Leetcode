//https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/


class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int n = A.size(), sum = 0;
        for (int i = 0; i < n; i++)
            sum += A[i];

        if (sum % 3 != 0)
            return false;

        int s = sum / 3;

        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += A[i];
            if (sum == s) {
                sum = 0;
                for (int j = n - 1; j > i + 1; j--) {
                    sum += A[j];
                    if (sum == s)
                        return true;
                }
                return false;
            }
        }

        return false;
    }
};
