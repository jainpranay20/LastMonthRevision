class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        int total=0;
        int count=0;
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]!=0)
                    total++;
            }
        int ans=0;
        int dx[4]={0,0,-1,1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {
            int sz=q.size();
            count=count+sz;
          
            while(sz--)
            {
                int a=q.front().first,b=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r=a+dx[i];
                    int c=b+dy[i];
                    if(r>=0 && r<m && c>=0 && c<n &&grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        q.push({r,c});
                    }
                    
                }
            }
            if(!q.empty())ans++;
        }
        if(total!=count)return -1;
        return ans;
        
    }
};