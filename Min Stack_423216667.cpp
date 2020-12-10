class MinStack {
    stack<int>st,st1;
    int min;
public:
    /** initialize your data structure here. */
    
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int x) {
        st.push(x);
        // if(st1.size()>0){
        //     if(st.top()<x)
        //         st1.push(st1.top());
        // }else
        //     st1.push(x);
        if(st1.size()>0)
            st1.top()<x?st1.push(st1.top()):st1.push(x);
        else
            st1.push(x);
    }
    
    void pop() {
        st.pop();
        st1.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st1.top();
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
