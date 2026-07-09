class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        std::reverse(s.begin() , s.end());
        std::string ans = "";
        for(int i = 0 ; i < n ; i++){
            std::string word ="";
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            std::reverse(word.begin() , end(word));
            if(word.length() > 0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
        
    }
};