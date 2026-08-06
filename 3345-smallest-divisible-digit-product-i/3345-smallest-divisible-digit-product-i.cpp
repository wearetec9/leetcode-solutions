class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n ;  ;  i++){
            int temp = i ; 
            int k = 1 ; 
            while(temp >0){
                k *=(temp%10);
                temp /= 10 ; 
            }
            if( k % t == 0)return i ; 
        }
     
    }
};