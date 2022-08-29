class Solution {
public:

    int dfs(vector<vector<int>> &grid,int x,int y,int m,int n)
    {
        if(x<0 || y<0 || x==m || y==n || grid[x][y]==0)
            return 0;
        
        grid[x][y]=0;
        int count=0;
        count=1+dfs(grid,x-1,y,m,n)+
        dfs(grid,x,y+1,m,n)+
        dfs(grid,x+1,y,m,n)+
        dfs(grid,x,y-1,m,n);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int sum=dfs(grid,i,j,m,n);
                    res = max(res,sum);
                }
            }
        }
        return res;
    }
};