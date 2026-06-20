class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int,int> mp ; 
        bool state = false ; 
        for(int i = 0 ; i < nums.size();i++){
            int curr = nums[i];
            if(mp.contains(curr)){
                int j = mp[curr];
                if(std::abs(i-j)<=k){
                    state = true ;
                }
            }
            mp[curr] = i ; 
        }
        return state;
    }
};