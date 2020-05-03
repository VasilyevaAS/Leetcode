//https://leetcode.com/problems/peak-index-in-a-mountain-array/


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0;
        int right = (int)A.size() - 1;
        while (right - left > 2){
            int mid = left + (right - left) / 2;
            if (A[mid] < A[mid + 1]){
                left = mid;
            } else {
                right = mid + 1;
            }
        }
        assert(right - left == 2);
        return left + 1;
    }
};
