//https://leetcode.com/problems/rotate-string/


class Solution {
public:
    bool rotateString(const string &A, const string &B) {
        if (A.size() != B.size()){
            return false;
        }
        if (A == B){
            return true;
        }
        int n = (int)A.size();
        for (int startA = 1; startA < n; startA++){
            bool good = true;
            for (int indexB = 0; indexB < n; indexB++){
                int indexA = (startA + indexB) % n;
                if (A[indexA] != B[indexB]){
                    good = false;
                    break;
                }
            }
            if (good){
                return true;
            }
        }
        return false;
    }
};
