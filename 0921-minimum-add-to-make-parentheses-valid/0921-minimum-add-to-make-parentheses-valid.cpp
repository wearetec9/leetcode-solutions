class Solution {
public:
    int minAddToMakeValid(string s) {
        std::stack<char> st;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            char curr = s[i];
            if (curr == '(') {
                st.push(s[i]);
            } else if (curr == ')') {
                if (!st.empty()) {
                    char top = st.top();
                    if (top == '(') {
                        st.pop();
                    }else st.push(s[i]);
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while (!st.empty()) {
                if (st.top() == '(') {
                    cnt++;
                    st.pop();
                }
                else if (st.top() == ')') {
                    cnt++;
                    st.pop();
                }
            }
        return cnt;
    }
};