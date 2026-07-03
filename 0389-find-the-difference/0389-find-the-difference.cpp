class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        long long sum = 0, diff = 0;
        for(char c : t ){
            sum += c -'a';
        }
        for(char c : s ){
            diff += c -'a';
        }
        return(sum-diff +'a');
        
    }
};