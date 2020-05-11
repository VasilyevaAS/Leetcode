//https://leetcode.com/problems/minimum-index-sum-of-two-lists/


class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int size1 = list1.size();
        int size2 = list2.size();
        unordered_map<string, int> mp;
        vector<pair<string, int>> v;
        vector<string> ans;
         
        for (int i = 0; i < size1; ++i) 
            mp[list1[i]] = i;
         
        for (int i = 0; i < size2; ++i) {
            if (mp.count(list2[i])) {
                v.push_back({list2[i], i + mp[list2[i]]});
            }
        }
         
        sort(v.begin(), v.end(), cmp);
         
        ans.push_back(v[0].first);
         
        for (int i = 1; i < v.size(); ++i) {
            if (v[i].second == v[i-1].second) 
                ans.push_back(v[i].first);
            else
                break;
        }
        return ans;
    }
     
private:
    static bool cmp(pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
    }
};
