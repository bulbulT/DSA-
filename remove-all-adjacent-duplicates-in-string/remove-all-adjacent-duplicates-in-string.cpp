class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        if(n == 0) return s;
        
        stack<char> stk;
        
        for(int i = n-1; i >= 0; i--){
            if(stk.empty()) stk.push(s[i]);
            else if(s[i] != stk.top()){
                stk.push(s[i]);
            }
            else{
                stk.pop();
            }
        }
        string res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        
        return res;
        
    }
};