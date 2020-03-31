//https://leetcode.com/problems/add-to-array-form-of-integer/



class Solution {
    
    size_t genLen(int n){
        assert(n > 0);
        size_t ans = 0;
        while (n > 0){
            ans++;
            n /= 10;
        }
        return ans;
    }
    
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        for (size_t i = A.size(); i-- > 0 && K > 0;){
            K += A[i];
            A[i] = K % 10;
            K /= 10;
        }
        if (K > 0){
            size_t len = genLen(K);
            A.insert(A.begin(), len, 0);
            for (size_t i = len; i-- > 0;){
                A[i] = K % 10;
                K /= 10;
            }
        }
        return move(A);
    }
};
