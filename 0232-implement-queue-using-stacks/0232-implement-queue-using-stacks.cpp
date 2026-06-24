class MyQueue {
private:
    std::stack<int> st;
    std::stack<int> st2;
    void transfer() {
        if (st2.empty()) {
            while (!st.empty()) {
                st2.push(st.top());
                st.pop();
            }
        }
    }

public:
    MyQueue() {}
    void push(int x) { st.push(x); }
    int pop() { transfer(); int val = st2.top() ; st2.pop() ; return val; }
    int peek() { transfer(); int value = st2.top(); return value; }
    bool empty() {return st.empty() && st2.empty();}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */