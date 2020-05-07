//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {

public:

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i ++){
            int e = 0;
            for(int j = 0; j < nums.size(); j ++)
                e += (nums[j] < nums[i]);
            res.push_back(e);
        }
        return res;
    }
};
