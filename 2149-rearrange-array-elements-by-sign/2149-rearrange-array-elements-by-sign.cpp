class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::vector<int> pos ; 
        std::vector<int> neg ;
        std::vector<int> output ;
        for(int i : nums){
            if(i < 0) neg.push_back(i);
            else pos.push_back(i);
        } 
        output.push_back(pos[0]);
        int k = 1 ; 
        int j = 0 ; 
        for(int i = 1 ; i < nums.size(); i++){
            if(i % 2 == 1 && j < neg.size()){
                output.push_back(neg[j]);
                j++;
            }
            else if(i % 2 == 0 && k < pos.size()){
                output.push_back(pos[k]);
                k++;
            }
        }
        return output;
    }
};