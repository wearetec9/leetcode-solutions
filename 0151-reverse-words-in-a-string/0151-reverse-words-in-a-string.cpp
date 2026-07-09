class Solution {
public:
    string reverseWords(string s) {
        std::reverse(s.begin() , s.end());
        std::string ans = ""; 
        for(int i = 0 ; i < s.length() ; i++ ){
            std::string word = "";
            while(i < s.length() && s[i] != ' '){
                word+= s[i];
                i++;
            }
            std::reverse(word.begin() , word.end());
            if(word.length() > 0){
                ans += " " + word;
            }
        }

        return ans.substr(1);
    } 
};