class MyStack {
    queue<int> q, tmp;
    int size;
    
public:
    /** Initialize your data structure here. */
    MyStack() {
        size = 0;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        size ++;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q.empty()) return -1;
        
        int top_element = q.back();
        size --;
        for(int i = 0; i < size; i++) {
            tmp.push(q.front());
            q.pop();
        }
        q = tmp; 
        queue<int> tmp2;
        tmp = tmp2;
        
        return top_element;
    }
    
    /** Get the top element. */
    int top() {
        if(q.empty()) return -1;
        return q.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
