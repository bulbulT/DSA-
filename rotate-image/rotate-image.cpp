class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        //transposing the matrix
        for(int i = 0; i < r; i++){
            for(int j = i; j < c; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
         
        for(int i = 0; i < r; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        
    }
};