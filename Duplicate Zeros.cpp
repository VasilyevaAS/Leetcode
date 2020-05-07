//https://leetcode.com/problems/duplicate-zeros/


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i, j;
        i = j = 0;
        while (j < n) {
            if (arr[i] == 0)
                j++;
            i++;
            j++;
        }
        i--; 
        j--; 
        while (i >= 0) {
            if (j < n) 
                arr[j] = arr[i];
            if (arr[i] == 0)
                arr[--j] = 0;
            i--;
            j--;
        }
    }
};
