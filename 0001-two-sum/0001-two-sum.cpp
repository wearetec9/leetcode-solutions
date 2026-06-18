class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> mp ; 
        for(int i = 0 ; i < nums.size() ; i++){
            int curr = nums[i];
            int comp = target-nums[i];
            if(mp.contains(comp)){
                return {mp[comp] , i};
            }
            mp[curr] = i ; 
        }
        return {};
    }
};