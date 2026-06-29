class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> st(nums.begin(),nums.end()) ;
        if(nums.size() < 1) return 0 ;
        int len = 0 ; 
        for(int num : st){
            int curr = num ; 
            if(!st.contains(curr-1)){
                int streak = 1 ;
                while(st.contains(curr + 1)){
                    streak++;
                    curr++;
                }
                len = std::max(streak , len);
            }
        }
        return len  ; 
    }
};