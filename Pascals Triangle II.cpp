//https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev_row = {1};
        for(int i = 1; i <= rowIndex; i++){
            vector<int> curr_row(prev_row.size() + 1, 1);
            for(int j = 1; j < curr_row.size() - 1; j++){
                curr_row[j] = prev_row[j - 1] + prev_row[j];
            }
            prev_row = curr_row;
            if(i == rowIndex)
                return curr_row;
        }
        return prev_row;
    }
};
