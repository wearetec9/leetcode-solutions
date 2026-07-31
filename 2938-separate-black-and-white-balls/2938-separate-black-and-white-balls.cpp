class Solution {
public:
    long long minimumSteps(string s) {
        long long left = 0 ; 
        long long cnt = 0 ; 
        for(long long i = 0 ; i < s.length(); i++){
            char cur  = s[i];
            if(cur == '0'){
                std::swap(s[i], s[left]);
                cnt += (i - left);
                left++;
            }
        }
        return cnt ; 
    }
};