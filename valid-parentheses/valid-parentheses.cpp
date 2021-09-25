#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> visited;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                visited.push(s[i]);
            }
            else{
                if(visited.empty()){
                    return false;
                }
                if(s[i] == ')' && visited.top() != '(')
                    return false;
                
                if(s[i] == ']' && visited.top() != '[')
                    return false;
                
                if(s[i] == '}' && visited.top() != '{')
                    return false;
                
                visited.pop();
            }
        }
        return visited.empty();
    }
};