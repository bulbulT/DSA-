class Solution {
public:
    bool ispalindrome(string word){
        int i = 0;
        int j = word.size() - 1;
        while(i < j){
            if(word[i] != word[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x : words){
            if(ispalindrome(x)) return x;
        }
        return "";
    }
};