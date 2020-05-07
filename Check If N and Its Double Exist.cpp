//https://leetcode.com/problems/check-if-n-and-its-double-exist/


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> h;
        int zeros = 0;
        for (int x : arr)
            if (x != 0)
                h.insert(x);
            else
                zeros++;

        for (int x : arr)
            if (h.find(2 * x) != h.end())
                return true;

        return zeros >= 2;
    }
};
