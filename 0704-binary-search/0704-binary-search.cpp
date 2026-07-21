class Solution {
public:
    // This is the function LeetCode actually calls
    int search(vector<int>& nums, int target) {
        // Kick off the recursion with the full array bounds
        return binarySearchHelper(nums, target, 0, nums.size() - 1);
    }

private:
    // Standard practice: name your recursive engine something like "Helper"
    // Standard practice: order bounds as (left, right)
    int binarySearchHelper(const vector<int>& nums, int target, int left, int right) {
        // Base Case 1: Target not found
        if (left > right) return -1; 
        
        int mid = left + (right - left) / 2; 
        
        // Base Case 2: Target found!
        if (target == nums[mid]) return mid; 
        
        // Recursive Step: Search Left Half (Notice the 'return' keyword!)
        else if (target < nums[mid]) {
            return binarySearchHelper(nums, target, left, mid - 1); 
        }
        // Recursive Step: Search Right Half (Notice the 'return' keyword!)
        else {
            return binarySearchHelper(nums, target, mid + 1, right);
        }
    }
};