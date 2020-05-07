//https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int cnt = 1, num = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] == arr[i - 1]) {
                cnt++;
            } else {
                if (cnt * 4 > n) {
                    return num;
                }
                cnt = 1;
                num = arr[i];
            }

        return num;
    }
};
