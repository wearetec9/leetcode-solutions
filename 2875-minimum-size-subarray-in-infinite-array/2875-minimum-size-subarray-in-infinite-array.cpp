#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        // --- ADDED: Calculate the sum of one full array pass ---
        long long total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }

        // --- ADDED: Extract the full array repetitions to avoid TLE/MLE ---
        long long full_chunks = target / total_sum;
        int modified_target = target % total_sum;

        // --- ADDED: Shortcut if the target divides perfectly ---
        if (modified_target == 0) {
            return full_chunks * nums.size();
        }

        vector<int> infinite_nums;
        int len = INT_MAX;
        int left = 0;
        int sum = 0;
        int k = 0;
        int cnt = 0 ;

        while( k < nums.size()){
            infinite_nums.push_back(nums[k]);
            k++;
            k = k % nums.size();
            cnt++;
            // --- CHANGED: 3 array lengths is the absolute maximum needed now ---
            if(cnt == nums.size() * 3){
                break ; 
            }
        }

        for (int i = 0; i < infinite_nums.size(); i++) {
            // --- CHANGED: Use the small modified_target here ---
            sum += infinite_nums[i];
            while (sum > modified_target) {
                sum -= infinite_nums[left];
                left++;
            }
            if (sum == modified_target) {
                int l = i - left + 1;
                len = std::min(len, l);
            }
        }

        if(len == 0 || len == INT_MAX) return -1 ; 

        // --- CHANGED: Return the sliding window length + the skipped full array elements ---
        return len + (full_chunks * nums.size());
    }
};
