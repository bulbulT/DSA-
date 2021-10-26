class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        
        for(int i = 0; i < s.length(); i++){
            freq[s[i]]++;
        }
        
        unordered_map<char, int>:: iterator it;
        priority_queue<pair<int, char>> pq;
        
        for(it = freq.begin(); it != freq.end(); it++){
            pq.push({it->second, it->first});
        }
        
        string ans;
        
        while(!pq.empty()){
            ans += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};