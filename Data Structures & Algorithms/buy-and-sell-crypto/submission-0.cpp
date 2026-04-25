class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN ; 
        int minBuy = prices[0]  ;
        for(int i   = 1; i < prices.size() ; i++){
           if(prices[i]  > minBuy) maxProfit = max(maxProfit , prices[i]-minBuy);
           else minBuy = prices[i] ; 
        }

        return maxProfit== INT_MIN?0  : maxProfit   ; 
    }
};
