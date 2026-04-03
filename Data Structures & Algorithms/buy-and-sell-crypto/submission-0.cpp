class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0;
        for(int i=0;i<n;i++)
        {   
            int maxp = 0;
            for(int j=i+1;j<n;j++)
            {
                maxp = prices[j]-prices[i]; 
                profit = max(profit,maxp);
            }
        }
        return profit;
    }
};
