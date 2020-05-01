//https://leetcode.com/problems/daily-temperatures/


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> tempFirstPos(1 + 100, (int)T.size());
        vector<int> ans(T.size(), 0);
        for (int i = (int)T.size() - 1; i >= 0; i--){
            int minPos = (int)T.size();
            for (int j = T[i] + 1; j <= 100; j++){
                minPos = min(minPos, tempFirstPos[j]);
            }
            if (minPos != (int)T.size()){
                ans[i] = minPos - i;
            }
            tempFirstPos[T[i]] = i;
        }
        return ans;
    }
};
