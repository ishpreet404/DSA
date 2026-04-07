class MinStack {
public:
    int min = INT_MAX;
    int prev =min;
    stack<int> minstack;
    stack<int> mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<=min) {
            min=val;
            mini.push(min);
        }
        minstack.push(val);
    }
    
    void pop() {
        if(minstack.top()==mini.top()){
        mini.pop();
        if(mini.size()==0){
            min=INT_MAX;
        }else{

        min=mini.top();    
        }
        } 
                minstack.pop();
    }
    
    int top() {
            int x =    minstack.top();
        return x ;
    }
    
    int getMin() {

        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */