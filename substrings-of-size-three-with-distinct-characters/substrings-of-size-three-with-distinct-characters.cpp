class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<int> dict(256, 0);
        
        int start = 0;
        int end = 0;
        int ans = 0;
        
        for(; end < s.size(); end++){
            while(dict[s[end]] > 0){
                dict[s[start]]--;
                start++;
            }
            
            dict[s[end]]++;
            
            if(end - start + 1 == 3){
                ans++;
                dict[s[start]]--;
                start++;
            }
        }
        
        return ans;
    }
};