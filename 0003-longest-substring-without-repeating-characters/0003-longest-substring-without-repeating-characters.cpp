class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp ; 
        int left = 0 ; 
        int len = 0 ; 
        for(int i = 0 ; i < s.length();i++){
            char cur = s[i]; 
            while(mp.contains(s[i])){
                mp.erase(s[left]);
                left++;
            }
            mp[cur] = i ; 
            len = std::max(len , i - left + 1 ); 
        }
        return len;
    }
};