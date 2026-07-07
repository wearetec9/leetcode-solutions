class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0 ; 
        std::string s = to_string(n);
        long long num = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != '0'){
                int number = s[i] - '0';
                num  = (num * 10) + number;
                sum += number ; 
            }
        }
        long long ans = num * sum ; 
        return ans ; 
    }
};