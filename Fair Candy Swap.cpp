//https://leetcode.com/problems/fair-candy-swap/

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0;
        for (int v : A){
            sumA += v;
        }
        unordered_set<int> BValues;
        int sumB = 0;
        for (int v : B){
            sumB +=v;
            BValues.insert(v);
        }
        assert((sumA - sumB) % 2 == 0);
        int diff = (sumA - sumB) / 2;
        for (int Av : A){
            int Bv = Av - diff;
            if (BValues.count(Bv) > 0){
                return vector<int>{Av,Bv};
            }
        }
        throw invalid_argument("no solution for given A and B");
    }
};
