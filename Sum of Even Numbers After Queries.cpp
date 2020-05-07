//https://leetcode.com/problems/sum-of-even-numbers-after-queries/


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        int sum = 0;
        vector<int> ans;
        for(int i = 0; i < A.size(); i++){
               if(A[i] % 2 == 0 ){
                   sum += A[i];
               }
        }
        for(const auto& q: queries){
            if(A[q[1]] %2 ==0){
                sum -= A[q[1]];
            }
            A[q[1]]+=q[0];
            if(A[q[1]]%2 ==0){
                sum+=A[q[1]];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
