class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // 1. Initialize arrays (already filled with 1s)
        std::vector<int> left(n, 1); 
        std::vector<int> right(n, 1);
        
        // 2. Build Left Array
        // left[i] contains the product of all elements to the left of i
        for(int i = 1; i < n; i++) {
            left[i] = left[i-1] * nums[i-1];  
        } 
        
        // 3. Build Right Array
        // right[i] contains the product of all elements to the right of i
        for(int i = n - 2; i >= 0; i--) {
            right[i] = right[i+1] * nums[i+1];  
        } 
        
        // 4. Combine and Return
        std::vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }
        
        return ans;
    }
};