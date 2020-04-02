//https://leetcode.com/problems/k-diff-pairs-in-an-array/


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
                if (k < 0)return 0;
        unordered_map<int, int>unmp;
        for (auto &n : nums) {
            unmp[n]++;
        }
        int cnt = 0;
        for (auto &m : unmp) {
            if (k == 0) {
                if (m.second >= 2)cnt++;
            }
            else {
                cnt += unmp.count(m.first - k);
            }
        }
        return cnt;
    }
};
