class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool state = false;
        int left = 0 ;
        int right = nums.size()-1;
        while(left <= right){
            if(nums[left] == target || nums[right] == target ){
                state = true;
                break ;
            }else{
                right--;
                left++;
            }
        }
        return state ; 
    }
};