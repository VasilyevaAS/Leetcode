//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/


class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), m = -1;

        for (int i = n - 1; i >= 0; i--) {
            int t = arr[i];
            arr[i] = m;
            m = max(m, t);
        }

        return arr;
    }
};
