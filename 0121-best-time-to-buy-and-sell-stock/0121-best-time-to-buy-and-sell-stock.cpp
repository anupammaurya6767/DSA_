class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int curr =  prices[0];
        int maxP = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<curr)
            {
                curr=prices[i];
            }
            
            maxP = max(maxP,prices[i]-curr);
        }
        
        return maxP;
    }
};