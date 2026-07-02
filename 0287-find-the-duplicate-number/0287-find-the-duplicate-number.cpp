class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n = 0 ; 
        for(int i =1 ; i < nums.size() ; i++ ){
            if(nums[i] == nums[i-1]){
                n = nums[i];
            }
        }
        return n ; 
    }
};