// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{public:
    //Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int w, int wt[], int val[], int n)
// {
//     vector<vector<int>> memo;
//     memo.resize(n + 1, vector<int>(w + 1, -1));
//     for (int i = 0;i < n + 1;i++) {
//         memo[i][0] = 0;
//     }
//     for (int j = 0;j < w + 1;j++) {
//         memo[0][j] = 0;
//     }

//     for (int i = 1;i < n + 1;i++) {
//         for (int j = 1;j < w + 1;j++) {
//             if (wt[i - 1] <= j) {
//                 memo[i][j] = max(val[i - 1] + memo[i - 1][j - wt[i - 1]], memo[i - 1][j]);
//             }
//             else {
//                 memo[i][j] = memo[i - 1][j];
//             }
//         }
//     }
//     return memo[n][w];
// }
int recur(int w, int wt[], int val[], int n, vector<vector<int>>& memo) {
    if (n == 0 || w == 0) return 0;
    if (memo[n][w] != -1) return memo[n][w];
    if (wt[n - 1] <= w) {
        return memo[n][w] = max(val[n - 1] + recur(w - wt[n - 1], wt, val, n - 1, memo), recur(w, wt, val, n - 1, memo));
    }
    else if (wt[n - 1] > w) {
        return memo[n][w] = recur(w, wt, val, n - 1, memo);
    }
}

int knapSack(int w, int wt[], int val[], int n)
{
    vector<vector<int>> memo;
    memo.resize(n + 1, vector<int>(w + 1, -1));

    return recur(w, wt, val, n, memo);
}

};


// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends