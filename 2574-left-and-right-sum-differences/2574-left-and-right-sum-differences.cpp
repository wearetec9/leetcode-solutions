class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int> prefix1(nums.size()) ;
        std::vector<int> prefix2(nums.size()) ;
        std::vector<int> output ;
        prefix1[0] = 0 ; 
        prefix2[nums.size()-1] = 0 ;
        for(int i = 1 ; i < nums.size(); i++){
            prefix1[i] = prefix1[i-1] + nums[i-1];
        } 
       
        for(int i = nums.size()-2 ; i >= 0; i--){
            prefix2[i] = prefix2[i+1] + nums[i+1];
        } 
        for(int i = 0 ; i < nums.size(); i++){
            int x = prefix1[i];
            int y = prefix2[i];
            int dif =  y - x  ;
            if(dif < 0){
                dif *= -1 ; 
            }
            output.push_back(dif);
        }
        return output ; 
    }
};