class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int end = 0;
        
        int currsum = 0;
        int minlen = INT_MAX;
        
        while(end < nums.size()){
            currsum += nums[end++];
            
            while(currsum > target){
                 minlen = min(end-start, minlen);
                currsum -= nums[start++];
            }
            
            if(currsum == target){
                minlen = min(end-start, minlen);
            }
            
        }
        if(minlen == INT_MAX) return 0;
        
        return minlen;
        
    }
};