class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        int maxProfit = INT_MIN;
        int currmin = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < currmin){
                currmin = prices[i];
            }
            
            int profit = prices[i] - currmin;
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
        
        return maxProfit;
    }
};