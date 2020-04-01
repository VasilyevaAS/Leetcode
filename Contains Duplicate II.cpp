//https://leetcode.com/problems/contains-duplicate-ii/


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k <= 0){
            return false;
        }
        unordered_set<int> last;
        for (size_t i = 0; i< nums.size(); i++){
            if (last.count(nums[i]) > 0){
                return true;
            }
            last.insert(nums[i]);
            if (i >= k){
                last.erase(nums[i - k]);
            }
        }
        return false;
    }
};
