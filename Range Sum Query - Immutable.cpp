//https://leetcode.com/problems/range-sum-query-immutable/



class NumArray {
    vector<int> sum;
public:
    NumArray(vector<int>& nums) 
        : sum(nums.size() + 1, 0)
    {
        partial_sum(nums.begin(), nums.end(), sum.begin() + 1);
    }
    
    int sumRange(int i, int j) {
        return sum[j + 1] - sum[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
