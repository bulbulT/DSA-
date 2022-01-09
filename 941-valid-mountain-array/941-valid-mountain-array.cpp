class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        
        int i = 1;
        while(i < arr.size()){
            if(arr[i-1] < arr[i]) i++;
            else break;
        }
        if(i == 1 || i == arr.size()) return false;
        
        while(i < arr.size()){
            if(arr[i-1] > arr[i]){
                i++;
            }
            else break;
        }
        
        if(i == arr.size()) return true;
        else return false;
    }
};