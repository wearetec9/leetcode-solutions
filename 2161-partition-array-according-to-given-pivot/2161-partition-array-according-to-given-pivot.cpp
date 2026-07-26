class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        std::vector<int> low ; 
        std::vector<int> high ;
        std::vector<int> equal ;
        std::vector<int> output ;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] > pivot) high.push_back(nums[i]);
            if(nums[i] < pivot) low.push_back(nums[i]);
            if(nums[i] == pivot) equal.push_back(nums[i]);
        } 
        output.insert(output.end(), low.begin(),low.end());
        output.insert(output.end(),equal.begin(),equal.end());
        output.insert(output.end(),high.begin(),high.end());
        return output ; 


    }
};