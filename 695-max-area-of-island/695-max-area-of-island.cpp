class Solution {
public:

    void dfs(vector<vector<int>> &grid,int x,int y,int m,int n,int &count)
    {
        if(x==m || y==n ||  x<0 || y<0 ||grid[x][y]==0 )
            return ;
        
        grid[x][y]=0;
        count++;
        dfs(grid,x-1,y,m,n,count);
        dfs(grid,x,y+1,m,n,count);
        dfs(grid,x+1,y,m,n,count);
        dfs(grid,x,y-1,m,n,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),res=0,count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    count=0;
                    dfs(grid,i,j,m,n,count);
                    res = max(res,count);
                }
            }
        }
        return res;
    }
};