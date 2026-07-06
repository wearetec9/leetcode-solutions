class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0 ; 
        int maxCnt = 0 ;
        for(char c : s){
            if(c == '('){
                cnt++;
                if(cnt > maxCnt ){
                    maxCnt = cnt ; 
                }
            }else if ( c == ')'){
                cnt--;
            }    
        }
        return maxCnt ; 


    }
};