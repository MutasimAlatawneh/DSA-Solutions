class MinStack {
public:
stack<int>st;
    MinStack() {
        

    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int mn=st.top();
        stack<int>st2=st;
        while(!st2.empty()){
            mn=min(mn,st2.top());
            st2.pop();
        }
        return mn;
    }
};
