class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> squares(size);
        
        for(int i = 0; i < size; i++){
            squares[i] = nums[i] * nums[i];
        }
        
        sort(squares.begin(), squares.end());
        return squares;
        
    }
};