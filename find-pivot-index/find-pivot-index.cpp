class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        int arr[n];
        int arr1[n];
        int leftsum = 0;
        int rightsum = 0;
        
        for(int i = 0; i < n; i++){
            leftsum += nums[i];
            arr[i] = leftsum;
        }
        
        for(int i = n-1; i >= 0; i--){
            rightsum += nums[i];
            arr1[i] = rightsum;
            
        }
        
        for(int k = 0; k < n; k++){
            if(arr[k] == arr1[k]){
                return k;
            }
        }
        
        return -1;
    }
};