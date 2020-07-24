//Problem Link: https://leetcode.com/problems/min-stack/


class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> v1,v2;
    
    MinStack() {
        while(!v1.empty())
            v1.pop();
        while(!v2.empty())
            v2.pop();
    }
    
    void push(int x) {
        v1.push(x);
        if(v2.empty() || v2.top()>=x)
            v2.push(x);
    }
    
    void pop() {
        if(!v1.empty() && v1.top()==v2.top()){
            v1.pop();
            v2.pop();
        }
        else if(!v1.empty())
            v1.pop();
    }
    
    int top() {
        return v1.top();
    }
    
    int getMin() {
        return v2.top();
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