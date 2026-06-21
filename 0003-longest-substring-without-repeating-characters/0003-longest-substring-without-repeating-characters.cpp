class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char ,int> mp; 
        int left = 0 ; 
        int n = s.length();
        int len = 0 ; 
        for(int right = 0 ; right < n ; right++){
            char curr = s[right];
            if(mp.contains(curr)){
                int prev = mp[curr];
                left = std::max(left  , prev+1);
            }
            mp[curr] = right ; 
            int l = right - left + 1 ;
            len = std::max(len , l );
        }
        return len ; 
    }
};