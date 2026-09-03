class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int i = 0 ; i < nums1.size();i++){
            if(i % 2 == 0){
                return true ; 
            }
            else if (i % 2 == 1){
                return true; 
            }
        }
        return false;
    }
};