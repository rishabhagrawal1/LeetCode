class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        int minSoFar = INT_MAX;
        int MaxProfit = 0;
        for(int i = 0; i < prices.size();i++)
        {
            if(prices[i] <= minSoFar)
                minSoFar = prices[i];
            else if(prices[i] - minSoFar > MaxProfit)
                MaxProfit = prices[i] - minSoFar;
        }
        return MaxProfit;
    }
};