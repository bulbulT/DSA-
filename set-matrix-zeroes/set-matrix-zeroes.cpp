class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int modified = -10000000;
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    for(int k = 0; k < col; k++){
                        if(matrix[i][k] != 0)
                        matrix[i][k] = modified;
                    }
                    
                    for(int l = 0; l < rows; l++){
                        if(matrix[l][j] != 0)
                        matrix[l][j] = modified;
                    }
                }
            }
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == modified){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};