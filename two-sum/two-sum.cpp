class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = i;
            }
            if(map.find(target - nums[i]) != map.end() && i != map[target - nums[i]]){
                return {i, map[target-nums[i]]};
            }
        }
        return res;
        
    }
};