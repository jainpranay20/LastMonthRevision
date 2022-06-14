class Solution {
public:
    int lcs(string word1, string word2,int n,int m)
    {
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        int a=lcs(word1,word2,n,m);
        int word1_del = n-a;
        int word2_del = m-a;
        return word1_del + word2_del;
    }
};