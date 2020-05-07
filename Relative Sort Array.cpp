//https://leetcode.com/problems/relative-sort-array/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int idx = 0, curr = arr1.size() - 1;
        map<int, int> count;
        
        if(arr1.size() <= 1 || arr2.size() == 0) return arr1;
        
        for(int n : arr2) count[n] = 0;
        for(idx = arr1.size() - 1;idx >= 0;idx--) 
            if(count.find(arr1[idx]) != count.end()){
                count[arr1[idx]]++;
            }else
                arr1[curr--] = arr1[idx];
        
        sort(arr1.begin() + curr + 1, arr1.end());
        
        for(curr = idx = 0;idx < arr2.size();idx++){
            int cnt = count[arr2[idx]];
            while(cnt--) arr1[curr++] = arr2[idx];
        }
        
        return arr1;
    }
};
