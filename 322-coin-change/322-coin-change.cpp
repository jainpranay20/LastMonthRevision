class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //int dp[amount+1][coins.size()+1];
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                
                if(j==0)
                    dp[i][j]=0;
                 if(i==0)
                    dp[i][j]=INT_MAX-1;
              
               
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
               if(coins[i-1]<=j)
               {
                   dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
            }
        }
        return (dp[n][amount]== INT_MAX || dp[n][amount] == INT_MAX-1) ? -1 : dp[n][amount];
    }
};