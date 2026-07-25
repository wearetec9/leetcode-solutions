class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        std::vector<int> even;
        std::vector<int> odd;
        std::vector<int> output;
        for (int i : nums) {
            if (i % 2 == 0)
                even.push_back(i);
            if (i % 2 == 1)
                odd.push_back(i);
        }
        int j = 0;
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0 && j < even.size()) {
                output.push_back(even[j]);
                j++;
            } else if (i % 2 == 1 && k < odd.size()) {
                output.push_back(odd[k]);
                k++;
            }
        }
        return output;
    }
};