class Solution {
public:
    int findMin(vector<int>& nums) {
        int x = nums[0];
        int left = 0 ; 
        int right = nums.size()-1;
        while(left <= right){
            if(nums[left] < x ){
                x = nums[left];
            }
            left++;
        }
        return x ; 
    }
};