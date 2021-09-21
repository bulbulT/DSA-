class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answers(temperatures.size(), 0);
        stack<int> st;
        
        for(int i = 0; i < temperatures.size(); i++){
            int temp = temperatures[i];
            while(!st.empty() && temp > temperatures[st.top()]){
                answers[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        
        return answers;
        
    }
};