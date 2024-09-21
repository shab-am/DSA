// LeetCode problem 121: Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0 || prices.size() == 1)   return 0;
        
        int maxProfit = 0, bestBuy = prices[0];
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestBuy) 
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};