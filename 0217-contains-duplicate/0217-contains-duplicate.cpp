class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> mp;
        bool state = false ; 
        for(int i = 0 ; i < nums.size();i++){
            int curr = nums[i];
            if(mp.contains(curr)){
                return true ; 
            }
            mp[curr] = i ; 
        }
        return state ; 
    }
};