class Solution {
public:
    bool judgeSquareSum(int c) {
        int sq = std::sqrt(c);
        int left = 0 ; 
        while(left <= sq){
            long long sum =  (long long)left * left + (long long)sq * sq ;
            if(sum == c) return true ; 
            else if(sum > c) sq--;
            else left++;
        }
        return false; 
    }
};