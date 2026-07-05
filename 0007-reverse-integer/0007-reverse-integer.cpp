class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        string d = "";
        bool neg = false ; 
        for(int i = s.length()-1; i>=0;i--){
            if(s[i] == '-') {
                neg = true; 
                continue ;
            } 
            d+=s[i];
        }
        long long ans = std::stol(d);
        if(neg == true) ans= ans*-1 ; 
        if(ans < INT_MIN || ans > INT_MAX) {
            return 0 ;
        }
        return ans ; 
    }
};