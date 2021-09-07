class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> map;
        
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(map[i] > 1){
                return i;
            }
        }
        
        return -1;
    }
};