//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = (int)numbers.size() - 1;
        for (int i = 0; i < (int)numbers.size(); i++){
            while (j >= 0 && numbers[i] + numbers[j] > target){
                j--;
            }
            assert(i < j);
            if (numbers[i] + numbers[j] == target){
                return{i + 1, j + 1};
            }
        }
        throw invalid_argument("no sum target");
    }
};
