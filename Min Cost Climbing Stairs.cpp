//https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> minCost(cost.size());
        minCost[0] = cost[0];
        minCost[1] = cost[1];
        for (int i = 2; i < (int)cost.size(); i++){
            minCost[i]= cost[i] + min(minCost[i - 1], minCost[i-2]);
            
        } 
        return min(minCost.back(), minCost[minCost.size() - 2]);
    }
};
