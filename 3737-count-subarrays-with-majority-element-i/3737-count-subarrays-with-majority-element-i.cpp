class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int totalCount =0 ;
        int left = 0 ;
        for(int left =0 ; left < nums.size(); left++){
            int targetCount = 0 ;
            for(int r = left ; r < nums.size() ; r++){
                if(nums[r] == target){
                    targetCount++;
                }
                int len = r -left + 1;
                if(targetCount > len/2){
                    totalCount++;
                }
            }
        }
        return totalCount;
    }
};