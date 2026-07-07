class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxEle = 0 ; 
        int left = 0 ;
        unordered_set<char > st; 
        for(int right=0 ; right<s.length() ; right++){
            while(
                st.find(s[right]) != st.end()
            ){
                st.erase(s[left]);
                left++ ; 
            }
            st.insert(s[right]);
            maxEle = max(maxEle , right - left + 1 ) ; 
        }
    return maxEle ; 
    }
};