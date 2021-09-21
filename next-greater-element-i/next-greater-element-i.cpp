class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> nge;
        
        for(int i = 0; i < nums2.size(); i++){
            int element = nums2[i];
            while(!st.empty() && element > nums2[st.top()]){
                
                nge[nums2[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        
        while(!st.empty()){
            nge[nums2[st.top()]] = -1;
            st.pop();
        }
        
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++){
            res.push_back(nge[nums1[i]]);
            
        }
        return res;
    }
};