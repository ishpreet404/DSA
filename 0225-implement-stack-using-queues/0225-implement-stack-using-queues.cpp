class MyStack {
public:
queue <int> st;
    MyStack() {
        
    }
    
    void push(int x) {
       int s=st.size();
            st.push(x);
        for(int i=1;i<=s;i++){
            st.push(st.front());
            st.pop();
        }
    }
    
    int pop() {
        int x= st.front();
         st.pop();
         return x ;
    }
    
    int top() {
        int x= st.front();
        return x;
    }
    
    bool empty() {
        if(st.size()>=1)return false;
        return true;
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