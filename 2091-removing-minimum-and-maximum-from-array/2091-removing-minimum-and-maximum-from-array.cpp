class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; // Edge case: if 1 or 2 elements, we must delete all of them

        int maxIdx = 0;
        int minIdx = 0;

        // Find the indices of the maximum and minimum elements
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[maxIdx]) maxIdx = i;
            if (nums[i] < nums[minIdx]) minIdx = i;
        }

        // Ensure leftIdx is always the smaller index for easier math
        int leftIdx = min(maxIdx, minIdx);
        int rightIdx = max(maxIdx, minIdx);

        // Strategy 1: Delete both from the front (left side)
        int delBothFromLeft = rightIdx + 1;

        // Strategy 2: Delete both from the back (right side)
        int delBothFromRight = n - leftIdx;

        // Strategy 3: Delete leftIdx from the front, rightIdx from the back
        int delFromBothSides = (leftIdx + 1) + (n - rightIdx);

        // Return the minimum of the three strategies
        return min({delBothFromLeft, delBothFromRight, delFromBothSides});
    }
};
