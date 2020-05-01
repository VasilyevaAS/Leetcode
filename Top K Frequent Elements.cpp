//https://leetcode.com/problems/top-k-frequent-elements/



class Solution {
    
    struct Pair{
        int count;
        int key;
    };
    
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int x : nums){
            count[x]++;
        }
        vector<Pair> countKey;
        for (auto kv : count){
            countKey.push_back(Pair{kv.second, kv.first});
            
        }
        nth_element(
            countKey.begin(),
            countKey.begin() + k,
            countKey.end(),
            [](const Pair &left, const Pair &right){
                return left.count > right.count;
            });
        vector<int> ans(k);
        for (int i = 0; i<k; i++){
            ans[i] = countKey[i].key;
        }
        return ans;
    }
};
