class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        map<char, int> map;
        
        for(int i = 0; i < s.size(); i++){
            map[s[i]] = i;
        }
        
        int start = 0;
        int end = 0;
        
        for(int i = 0; i < s.size(); i++){
            end = max(end, map[s[i]]);
            if(i == end){
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }
     return ans;   
    }
};