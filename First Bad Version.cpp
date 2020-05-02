//https://leetcode.com/problems/first-bad-version/


// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int good = 0;
        int bad = n;
        while (bad > good + 1){
            int mid = good +((bad - good) >> 1);
            if (isBadVersion(mid)){
                bad = mid;
            } else {
                good = mid;
            }
        }
        assert(bad == good + 1);
        return bad;
    }
};
