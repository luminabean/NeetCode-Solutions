class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        /* 문자열을 한 글자씩 확인 */
        for(int i = 0; i < s.length(); i++) {
             /* 열린 괄호면 push */
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
                continue;
            }
            /* 닫힌 괄호면 스택이 비었는지 보고 괄호쌍 확인 */
            if(!st.empty()) {
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            /* 이외의 경우라면 조건 위반이므로 False */
            else
                return false;
        }
        /* 올바른 괄호 문자열이라면 스택이 비어있어야 함 */
        if(st.empty())
            return true;
        else
            return false;
    }
};