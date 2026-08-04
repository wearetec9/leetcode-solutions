class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int minNo = INT_MAX;
        int maxNo = INT_MIN;
        unordered_set<int> st;
        for (int i : nums) {
            minNo = min(minNo, i);
            maxNo = max(maxNo, i);
            st.insert(i);
        }
        for (int i = minNo + 1; i < maxNo; i++) {
            if (!st.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};