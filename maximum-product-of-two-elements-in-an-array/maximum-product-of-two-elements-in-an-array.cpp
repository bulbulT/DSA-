class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < nums.size(); i++){
            if(pq.size() < 2){
                pq.push(nums[i]);
            }
            
            else if(pq.top() < nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        
        int temp = pq.top() - 1;
        pq.pop();
        
        return temp * (pq.top()-1);
        
    }
};