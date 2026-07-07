class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0]; 
        for(int i : nums){
            g = std::gcd(g,i);
        }

        if(g == 1) return true; 
        else return false; 
    }
};