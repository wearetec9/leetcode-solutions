class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallestNum = nums[0];
        int largestNum = nums[0] ; 
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] < smallestNum){
                smallestNum = nums[i];
            }
            if(nums[i] > largestNum){
                largestNum = nums[i];
            }
        }
        return std::gcd(smallestNum , largestNum);
    }
};