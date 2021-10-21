class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        
        for(int i = 0 ; i < s.length(); i++){
            string word = "";
            if(s[i] == ' ') continue;
            
            while(s[i] != ' ' && i <= s.length()-1){
                word += s[i++];
            }
            
            stk.push(word);
        }
       
        string ans = "";
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
            if(!stk.empty()) ans += " ";
        }
        
        return ans;
    }
};