class Solution {
public:
    bool backspaceCompare(string S, string T) {

    stack<char>s;
    stack<char>t;
     string ans1,ans2;
    for(int i=0;i<S.length();i++){
        
       
        if(S[i]=='#'){
            if(s.empty()){
                continue;
            }
            
            else{
                s.pop();
            }
        }
        
        else{
            s.push(S[i]);
        }
        
    }
    
    for(int i=0;i<T.length();i++){
        
       
        if(T[i]=='#'){
            if(t.empty()){
                continue;
            }
            
            else{
                t.pop();
            }
        }
        
        else{
            t.push(T[i]);
        }
        
    }
    
    while(!s.empty()){
        ans1+=s.top();
        s.pop();
    }
    
    while(!t.empty()){
        
        ans2+=t.top();
        t.pop();
    }
    
    if(ans1==ans2){
        return true;
    }
    
    else{
        return false;
    }
}
};