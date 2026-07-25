class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        std::vector<int> even ; 
        std::vector<int> odd ; 
        for(int i : nums){
            if(i % 2 == 0) even.push_back(i);
        } 
        for(int i : nums){
            if(i % 2 != 0) odd.push_back(i);
        } 
        for(int i = 0 ; i < odd.size(); i++){
            even.push_back(odd[i]);
        }
        return even ; 
    }
};