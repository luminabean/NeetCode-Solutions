class Solution {
public:
    int add(int a, int b) {
        return a+b;
    }

    int multiply(int n) {
        return n*2;
    }

    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i = 0; i < size(operations); i++) {
            if(operations[i] == "+") {
                int b = st.top(); st.pop();
                int a = st.top();
                st.push(b);
                st.push(add(a, b));
            }
            else if(operations[i] == "C")
                st.pop();
            else if(operations[i] == "D")
                st.push(multiply(st.top()));
            else
                st.push(stoi(operations[i]));
        }
        int ans = 0;

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};