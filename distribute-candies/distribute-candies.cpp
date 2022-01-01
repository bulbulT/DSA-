class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> candty;
        for(int i = 0; i < candyType.size(); i++){
            candty[candyType[i]]++;
        }
        
        int permit2eat = candyType.size()/2;
        int size = candty.size();
        
        return min(size, permit2eat);
        
    }
};