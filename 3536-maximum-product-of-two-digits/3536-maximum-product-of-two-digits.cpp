class Solution {
public:
    int maxProduct(int n) {
        std::vector<int> v ;  
        int y = 0 ; 
        int mul = 0; 
        while(n > y){
            int x = n%10 ; 
            v.push_back(x);
            n /= 10 ; 
        } 
        for(int i = 0 ; i < v.size();i++){
            for(int j = i+1 ; j< v.size();j++){
                int multiply = v[i]*v[j];
                mul = std::max(multiply , mul);
            }
        }
        return mul ; 
    }
};