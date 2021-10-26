#include <queue>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        
        unordered_map<int, int> :: iterator it;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        for(it = freq.begin(); it != freq.end(); it++){
            pq.push({it->second, it->first});
            
            if(pq.size() > k) pq.pop();
            
        }
        vector<int> res;
        
        while(pq.size() > 0){
            res.push_back(pq.top().second);
            pq.pop();
        }        
        
        return res;
    }
};