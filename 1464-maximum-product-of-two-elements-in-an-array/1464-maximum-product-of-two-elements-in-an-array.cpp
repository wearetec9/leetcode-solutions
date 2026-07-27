class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = 0 ;
        for(int i =0 ; i< nums.size(); i++){
            for(int j = i+1 ; j<nums.size();j++){
                int product = (nums[i]-1)*(nums[j]-1);
                maxproduct = std::max(product , maxproduct);
            }
        }
        return maxproduct;
    }
};