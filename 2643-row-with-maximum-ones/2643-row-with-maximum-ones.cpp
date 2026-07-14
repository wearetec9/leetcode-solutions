class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCnt =0 ; 
        int row = 0 ; 
        for(int i = 0 ; i < mat.size() ; i++){
            int cnt = 0 ; 
            for(int j = 0 ; j < mat[i].size();j++){
                if(mat[i][j] == 1){
                    cnt++;

                }
                 
            }
            if(cnt > maxCnt ){
                maxCnt = cnt ; 
                row = i ; 
            }

        }
        return {row, maxCnt};
    }
};