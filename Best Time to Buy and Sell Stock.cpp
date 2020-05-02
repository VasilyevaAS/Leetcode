//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        int ans = 0;
        int nextMax = 0;
        for (int i = (int)prices.size() - 1; i >= 0; i--){
            int v = prices[i];
            ans = max(ans, nextMax - v);
            nextMax = max(nextMax, v);
        }
        return ans;
    }
};
