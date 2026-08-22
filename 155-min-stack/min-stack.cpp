class MinStack {
public:
    stack<long long>st;
    long long minimumValue;
    MinStack() {  
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minimumValue=st.top();
        }
        else{
            if(value<minimumValue){
                st.push((long long)2*value-minimumValue);
                minimumValue=value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.top()<minimumValue){
            minimumValue=2*minimumValue-st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<minimumValue){
            return minimumValue;
        }
        return st.top();
    }
    
    int getMin() {
        return minimumValue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */