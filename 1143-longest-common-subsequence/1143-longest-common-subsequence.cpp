class Solution {
public:
//     int lcs(string text1,string text2,int n,int m,vector<vector<int>> &memo)
//     {
//         if(n==0 or m==0)
//             return 0;
//         if(memo[n][m]!=-1)
//             return memo[n][m];
//         if(text1[n-1]==text2[m-1])
//             return memo[n][m]=1+lcs(text1,text2,n-1,m-1,memo);
//         else 
//             return memo[n][m]=max(lcs(text1,text2,n-1,m,memo),lcs(text1,text2,n,m-1,memo));
        
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.size();
//         int m=text2.size();
//         vector<vector<int>> memo(n+1,vector<int> (m+1,-1));
//         return lcs(text1,text2,n,m,memo);
     vector<vector<int>> dp;
    int lcs(int i,int j,string &a, string &b)
    {
        if(i==-1 || j==-1)    return 0;
        if(dp[i][j] != -1)  return dp[i][j];
        
        if(a[i] == b[j])    return dp[i][j] = 1+lcs(i-1,j-1,a,b);
        return dp[i][j] = max(lcs(i-1,j,a,b), lcs(i,j-1,a,b));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        dp.resize(n1,vector<int>(n2,-1));
        
        return lcs(n1-1,n2-1,text1,text2);
      
    }
    
};
