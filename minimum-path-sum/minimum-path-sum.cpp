class Solution {
public:
    int helper(vector<vector<int>>& grid, int rows, int columns, vector<vector<int>>& ans){
        if(rows == 0 && columns == 0) return grid[rows][columns];
        if(rows < 0 || columns < 0) return INT_MAX;
        if(ans[rows][columns] != -1) return ans[rows][columns];
        else{
            ans[rows][columns] = grid[rows][columns] + min(helper(grid, rows, columns-1, ans), helper(grid, rows-1, columns, ans)); 
        }
        return ans[rows][columns];
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        vector<vector<int>> ans(rows, vector<int>(columns, -1));
        
        return helper(grid, rows-1, columns-1, ans);
    }
};