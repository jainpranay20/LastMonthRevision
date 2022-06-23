// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++


class Solution{
        int visited[5][5];
    public:
    void solve(int r,int c,int n,string ssf,vector<vector<int>> &m,vector<string>&ans){
        if(r<0 or c<0 or r>=n or c>=n or m[r][c] == 0) return;
        if(r==n-1 and c==n-1){
            ans.push_back(ssf);
            return;
        }
        
        if(visited[r][c] == 1) return;
        
        visited[r][c] = 1;
        
        solve(r-1,c,n,ssf+"U",m,ans);
        solve(r+1,c,n,ssf+"D",m,ans);
        solve(r,c-1,n,ssf+"L",m,ans);
        solve(r,c+1,n,ssf+"R",m,ans);
        
        visited[r][c] = 0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        for(int i=0; i<5; i++) for(int j=0; j<5; j++) visited[i][j] = 0;
        solve(0,0,n,"",m,ans);
        return ans;
    }
};


    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends