class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n <= 1)
            return 0;
        int currentMin = prices[0];
        int profitSum = 0;
        int curProfit = 0;
        for(int i = 1; i<n; i++)
        {
            if(prices[i] < prices[i-1])
            {
                if(curProfit > 0)
                {
                    profitSum += curProfit;    
                }
                currentMin = prices[i];
                curProfit = 0;
            }
            else
            {
                curProfit = prices[i] - currentMin;
            }
            
        }
        return profitSum + curProfit;
    }
};