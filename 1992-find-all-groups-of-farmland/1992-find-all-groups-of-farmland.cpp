class Solution {
    int m, n;
    int mx[2];
public:
     void dfs(int i,int j, vector<vector<int>> &land) {
        if(i < 0 || j < 0 || i == m || j == n || land[i][j] == 0)
            return;
        mx[0] = max(mx[0],i);
        mx[1] = max(mx[1],j);
        land[i][j] = 0;
        dfs(i+1,j,land);
        dfs(i-1,j,land);
        dfs(i,j+1,land);
        dfs(i,j-1,land);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        m = land.size(), n = land[0].size();
        vector<vector<int>> res;
        for(int i = 0; i < m; i++) 
            for(int j = 0; j < n; j++) 
                if(land[i][j] == 1) {
                    mx[0] = i,mx[1] = j;
                    dfs(i,j,land);
                    res.push_back({i,j,mx[0],mx[1]});
                }
        
        return res;
    }
    
   
};

// class Solution {
// public:
//     void dfs(vector<vector<int>>& land,int i,int j,int m,int n,vector<vector<int>> &ans,vector<int> &res)
//     {
//         if(i<0 or j<0 or i==m or j==n or land[i][j]==0)
//             return ;
        
//         land[i][j]=0;
//         res.push_back({i,j});
//         dfs(land,i+1,j,m,n,ans,res);
//         dfs(land,i-1,j,m,n,ans,res);
//         dfs(land,i,j+1,m,n,ans,res);
//         dfs(land,i,j-1,m,n,ans,res);
        
//     }
//     vector<vector<int>> findFarmland(vector<vector<int>>& land) {
//         vector<vector<int>> ans;
//         int m=land.size(),n=land[0].size();
//         vector<pair<int,int>> res;
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(land[i][j]==1)
//                 {
//                     dfs(land,i,j,m,n,ans,res);
//                     res.push_back(i);
//                     res.push_back(j);
//                     ans.push_back(res);
//                 }
//             }
//         }
//         return ans;
//     }
// };