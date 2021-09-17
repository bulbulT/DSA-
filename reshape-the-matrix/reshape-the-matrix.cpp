class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c){
            return mat;
        }
        
        int a = 0;
        int b = 0;
        vector<vector<int>> res(r, vector<int>(c));
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                res[a][b] = mat[i][j];
                b++;
                if(b == c){
                    a++;
                    b = 0;
                }
                
            }
        }
       return res; 
    }
};