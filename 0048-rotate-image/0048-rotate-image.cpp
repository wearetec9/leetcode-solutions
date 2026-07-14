class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int col = matrix[0].size();
        for(int i = 0 ; i < matrix.size(); i++){
            for(int j = i+1 ; j < matrix[i].size(); j++){
                
                std::swap(matrix[i][j], matrix[j][i]);
            }
        reverse(matrix[i].rbegin(),matrix[i].rend());
        }
    }
};