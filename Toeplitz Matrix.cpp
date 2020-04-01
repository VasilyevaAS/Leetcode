//https://leetcode.com/problems/toeplitz-matrix/


class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int sizeI = (int)matrix.size();
        int sizeJ = (int)matrix[0].size();
        vector<int> buffer(sizeJ);
        int rowStart = 0;
        
        for (int i = 0; i < sizeI; i++) {
            
            for (int j = 0; j < sizeJ; j++) {
                
                if (i == 0) {
                    buffer[j] = matrix[i][j];
                } else if (j == 0){
                    rowStart--;
                    
                    if (rowStart < 0){
                        rowStart += sizeJ;
                    }
                    
                    buffer[rowStart] = matrix[i][j];
                } else {
                    
                    if (matrix[i][j] != buffer[(rowStart + j) % sizeJ]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
