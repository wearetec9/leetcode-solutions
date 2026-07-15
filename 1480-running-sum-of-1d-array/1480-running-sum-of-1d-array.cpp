class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector<int> num(nums.size()) ;
        for(int i = 1 ; i < nums.size(); i++){
            nums[i] += nums[i-1] ; 
        } 
        return nums ; 
    }
};