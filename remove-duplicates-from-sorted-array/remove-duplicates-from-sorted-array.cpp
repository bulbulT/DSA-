class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i + 1;
        int count = 0;
        
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
                count++;
            }
            
            else if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                j++;
            }
        }
        
        return nums.size() - count;
    }
};