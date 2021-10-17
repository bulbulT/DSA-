class Solution {
public:
    bool areNumbersAscending(string s){
        int prev = -1;
        int i = 0;
        
        while(i < s.length()){
            if(isdigit(s[i]) && isdigit(s[i+1])){
                    int curr = 10 * s[i] + s[i+1];
                    if(curr <= prev){
                        return false;
                    }
                    else if(curr > prev){
                        prev = curr;
                        i = i + 2;
                    }
                }
            else if(isdigit(s[i])){
                if(s[i] <= prev){
                    return false;
                }
                if(s[i] > prev){
                    prev = s[i++];
                }
            }
            
            else{
                i++;
            }
        }
        
        return true;
    }
};