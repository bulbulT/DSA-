class Solution {
public:
    
    int lowerbound(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        int start = -1;
        
        while(left <= right){
            mid = (left + right)/2;
            
            if(nums[mid] == target){
                start = mid;
                right = mid - 1;
            }
            
            if(nums[mid] > target){
                right = mid - 1;
            }
            
            if(nums[mid] < target){
                left = mid + 1;
            }
        }
       
        return start;
        
    }
    
    int upperbound(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        int end = -1;
        
        while(left <= right){
            mid = (left + right)/2;
            
            if(nums[mid] == target){
                end = mid;
                left = mid + 1;
            }
            
            if(nums[mid] > target){
                right = mid - 1;
            }
            
            if(nums[mid] < target){
                left = mid + 1;
            }
        }
        return end;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerbound(nums, target);
        int ub = upperbound(nums, target);
        
        return {lb, ub};
    }
};