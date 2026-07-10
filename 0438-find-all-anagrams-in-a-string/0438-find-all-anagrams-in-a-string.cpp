class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::unordered_map<char,int> mp ;
        std::unordered_map<char,int> mp1 ;
        std::vector<int> v ; 
        int slen = s.length();
        int plen = p.length();
        for(int i =0 ; i < p.length() ; i++){
            mp[p[i]]++;
            mp1[s[i]]++;
        }
        if(mp == mp1){
            v.push_back(0);
        }
        int left = 0 ; 
        for(int right = plen ; right < s.length() ; right++){
            mp1[s[right]]++;
            mp1[s[left]]--;
            if(mp1[s[left]] == 0){
                mp1.erase(s[left]);
            }
            left++;
            if(mp == mp1){
                v.push_back(left); 
            }
        }
        return v ;
    }
};