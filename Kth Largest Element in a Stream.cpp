//https://leetcode.com/problems/kth-largest-element-in-a-stream/


class KthLargest {
    priority_queue<int, vector<int>, greater<int>> topK;
    int k;
    
public:
    KthLargest(int k, vector<int>& nums)  :k(k) {
        for (int v : nums){
            topK.push(v);
            if (topK.size() > k){
                topK.pop();
            }
        }        
    }
    
    int add(int val) {
        topK.push(val);
        if (topK.size() > k){
            topK.pop();
        }
        assert(topK.size() == k);
        return topK.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
