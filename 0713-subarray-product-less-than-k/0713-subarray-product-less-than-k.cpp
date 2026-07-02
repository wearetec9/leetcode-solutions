class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int sub = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            int pro = 1 ;
            for(int j = i ; j < nums.size() ; j++){
                pro *= nums[j];
                if(pro < k) sub++;
                else break ;
            }
        }
        return sub;
    }
};