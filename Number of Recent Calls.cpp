//https://leetcode.com/problems/number-of-recent-calls/


class RecentCounter {
    queue<int> q;
public:
        
    int ping(int t) {
        q.push(t);
        while (q.front() < t - 3000){
            q.pop();
        }
        return(int)q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
