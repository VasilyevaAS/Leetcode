//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> b = nums;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++){
            nums[(i + k) % n] = b[i];
        }
    }
};
