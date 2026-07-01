class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = 0 ;
        int w2 = 0 ;
        std::string s = "";
        while(w1 < word1.length() || w2 < word2.length()){
            if(w1 < word1.length()){
                s += word1[w1];
                w1++;
            }
            if(w2 < word2.length()){
                s += word2[w2];
                w2++;
            }
        }
        return s; 
    }
};