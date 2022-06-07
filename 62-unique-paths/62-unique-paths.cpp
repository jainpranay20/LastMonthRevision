class Solution
{
    public:
       	//O(mn)time as well space, bottom up approach
        int uniquePaths(int m, int n)
        {
            int dp[m][n];
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    if (i == 0 || j == 0)
                        dp[i][j] = 1;
            for (int i = 1; i < m; i++)
                for (int j = 1; j < n; j++)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            return dp[m - 1][n - 1];
        }

    
    
//    	//DP(recursive+memoization)
//     int solve(int i, int j, int m, int n, vector<vector < int>> &dp)
//     {
//         if (i >= m || j >= n)
//             return 0;
//         if (i == m - 1 && j == n - 1)
//             return 1;
//         if (dp[i][j] != -1)
//             return dp[i][j];

//         return dp[i][j] = solve(i + 1, j, m, n, dp) + solve(i, j + 1, m, n, dp);
//     }
//     int uniquePaths(int m, int n)
//     {
//         vector<vector < int>> dp(m, vector<int> (n, -1));
//         return solve(0, 0, m, n, dp);
//     }
    //   TC:O(m*n)
   	//  SC:O(m*n)

    
    
    
    
   	//  TLE O(m+n)^2 time and also exponential space
   	// int count(int i,int j,int m,int n)
   	// {
   	//     if(i>=m or j>=n)
   	//         return 0;
   	//     if(i==m-1 or j==n-1)
   	//         return 1;
   	//     int a=count(i+1,j,m,n);
   	//     int b=count(i,j+1,m,n);
   	//     return a+b;
   	// }
   	// int uniquePaths(int m, int n) {
   	//     int i=0,j=0;
   	//     int a=count(i,j,m,n);
   	//     return a;
   	// }
};