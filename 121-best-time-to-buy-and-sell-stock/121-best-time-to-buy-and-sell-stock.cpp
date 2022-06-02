class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0],currentprofit=0,maxprofit;
        for(int i=1;i<n;i++)
        {
            currentprofit=max(currentprofit,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return currentprofit;
    }
};