class Solution {
public:
    string processStr(string s) {
        std::string result = "";
        for(int right = 0 ; right < s.length(); right++){
            if(isalpha(s[right])){
                result += s[right];
            }
            else if(s[right] == '#'){
                result+=result;
            }else if(s[right] == '%'){
                std::reverse(result.begin(),result.end());
            }else if(s[right] == '*'){
                if(result.empty()){
                    continue;
                } 
                result.pop_back();
            }
        }
        return result;
    }
};