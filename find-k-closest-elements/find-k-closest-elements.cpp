#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int size = arr.size();
        vector<int> gap(size);
        
        for(int i = 0; i < size; i++){
            gap[i] = abs(arr[i] - x);
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
        for(int i = 0; i < size; i++){
            minheap.push({gap[i], arr[i]});
        }
        
        
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        
        sort(res.begin(), res.end());
        return res; 
    }
};