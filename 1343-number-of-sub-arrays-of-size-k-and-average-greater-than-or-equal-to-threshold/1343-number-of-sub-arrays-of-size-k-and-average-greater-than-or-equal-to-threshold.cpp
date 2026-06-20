class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        int numberOfSub = 0;
        int sum = 0;
        for (int right = 0; right < arr.size(); right++) {
            sum += arr[right];
            while ((right - left + 1) > k) {
                sum -= arr[left];
                left++;
            }
            if ((right - left + 1) == k) {
                if (sum >= threshold * k) {
                    numberOfSub++;
                }
            }
        }
        return numberOfSub;
    }
};