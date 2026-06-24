class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st ;
        bool state = true ;
        if(s.length() <= 1) return false ;
        for(int i = 0 ; i < s.length() ; i++){
            char curr = s[i];
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' ) st.push(s[i]);
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(!st.empty()){
                    if((st.top() == '(' && curr == ')')  || (st.top() == '{' && curr == '}')  ||(st.top() == '[' && curr == ']') ){
                        st.pop();
                    }else{
                        return false ;
                    }

                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            state = true ;
        }else{
            state = false;
        }
        return state ; 
    }
};