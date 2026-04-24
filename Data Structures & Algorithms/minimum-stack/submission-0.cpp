class MinStack {
private:
    stack<int> st;    // 값을 저장하는 스택
    stack<int> minSt; // 최솟값을 저장하는 스택
public:
    MinStack() { }
    
    void push(int val) {
        st.push(val);

        /* val이 최솟값인지 확인하고 minSt에 저장 */
        if(minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }
    
    void pop() {
        /* 최솟값을 pop한다면 minSt도 pop */
        if(minSt.top() == st.top())
            minSt.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
