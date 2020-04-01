//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        
        int maxp = 0;
        
    for (int i = 1; i < prices.size(); ++i){
        if (prices[i] > prices[i-1]){
            maxp += prices[i] - prices[i-1];
        } else {
            
        }
    }
        return maxp;
    }
};
