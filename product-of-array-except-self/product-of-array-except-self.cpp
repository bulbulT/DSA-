class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        
        if(n < 1){
            return res;
        }
        int product = 1;
        for(int i = 0; i < n; i++){
            product *= nums[i];
            res.push_back(product);
        }
        
        product = 1;
        
        for(int i = n -1; i > 0; i--){
            res[i] = product * res[i-1];
            product *= nums[i];
        }
        
        res[0] = product; 
        return res;
    
    }
};