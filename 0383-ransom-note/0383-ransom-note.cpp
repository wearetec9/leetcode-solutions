class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char,int> mp ;
        std::unordered_map<char,int> mp2 ;
        for(char c : ransomNote){
            mp[c]++;
        }
        for(char c :  magazine ){
            mp2[c]++;
        }
        for(auto const& it : mp){
            if(mp2[it.first] < it.second) return false ; 
        }
        return true; 
    }
};