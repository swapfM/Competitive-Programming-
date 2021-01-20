class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
  int s=prices[0], profit=0;
        
        for(int i=1;i<prices.size();i++)
        {
            s=min(s,prices[i]);
            
            profit=max(profit,prices[i]-s);
        }
        return profit;
        
    }
};
