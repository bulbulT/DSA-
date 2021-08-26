class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxSum = nums[0];
        
        for(int i = 1; i < n; i++){
            sum += nums[i];
            if(sum <= nums[i]){
                sum = nums[i];
            }
            
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        
        return maxSum;
    }
};