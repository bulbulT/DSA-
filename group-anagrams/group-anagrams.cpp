class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> map;
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end());
            map[strs[i]].push_back(str);
        }
        
        unordered_map<string, vector<string>> :: iterator it;
        
        for(it = map.begin(); it != map.end(); it++){
            ans.push_back(it->second);
        }
        
        return ans;
        
    }
};