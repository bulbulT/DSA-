class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int score = 0;
        while(pq.size() >= 2){
            int i = pq.top();
            pq.pop();
            int j = pq.top();
            pq.pop();
            
            if(i > 0 && j > 0){
                score++;
                pq.push(i-1);
                pq.push(j-1);
            }
            
        }
        
        return score;
        
    }
};