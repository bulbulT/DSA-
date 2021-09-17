class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int columns = image[0].size();
        
        for(int i = 0; i < rows; i++){
            int j = 0;
            int k = columns - 1;
            
            while(j < k){
                swap(image[i][j++], image[i][k--]);
            }
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image; 
        
    }
};