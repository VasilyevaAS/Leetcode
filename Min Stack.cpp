//https://leetcode.com/problems/min-stack/


class MinStack {
    
    struct Item{
        int value;
        int min;
    };
    stack<int, vector <Item>> st;
    
public:
    /** initialize your data structure here. */

    
    void push(int x) {
        if (st.empty()){
            st.push(Item{x, x});
        } else {
            st.push(Item{x, min(x, st.top().min)});
        }
    }
    
    void pop() {
        if (st.empty()){
            throw logic_error("pop from empty stack");
        }
        st.pop();
    }
    
    int top() const {
        if (st.empty()){
            throw logic_error("top when stack empty");
        }
        return st.top().value;
    }
    
    int getMin() const {
        if (st.empty()){
            throw logic_error("getmin when stack empty");
        }
        return st.top().min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
