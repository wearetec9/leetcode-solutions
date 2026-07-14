class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1 = 0 ; 
        for(int i = 0 ; i < mat.size(); i++){
            for(int j = 0 ; j < mat[i].size(); j++){
                if(i == j){
                    sum1 += mat[i][j];
                }
            }
        }
        int sum2 = 0 ; 
        int row = 0 ;
        int col = mat.size()-1 ;
        while(row < mat.size() && col >= 0 ){
            if(row == col ) sum2 += 0 ;
            else sum2 += mat[row][col];
            row++;
            col--;
        }
        return sum1+sum2;

    }
};