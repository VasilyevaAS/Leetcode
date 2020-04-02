//https://leetcode.com/problems/array-partition-i/


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        const int kMaxValue = 10000;
        array<int, 2*kMaxValue+1> c{};
        
        for(int num: nums) ++c[num+kMaxValue];
        
        int ans=0;
        int n=-kMaxValue;
        bool first=true;
        
        while(n<=kMaxValue){
            if(!c[n + kMaxValue]){
                ++n;
                continue;
            }
            
            if(first){
                ans+=n;
                first=false;
            } else {
                first=true;
            }
            --c[n + kMaxValue];
        }
        return ans;
    }
};
