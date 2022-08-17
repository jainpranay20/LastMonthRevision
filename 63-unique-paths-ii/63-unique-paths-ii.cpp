class Solution {
public:
    int paths(int i,int j,int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&path)
    {
        if(i>=m or j>=n )
            return 0;
        if(obstacleGrid[i][j]==1)
            return 0;
        if(i==m-1 and j==n-1)
            return 1;
        if(path[i][j]!=-1)
            return path[i][j];
        return path[i][j]=paths(i+1,j,m,n,obstacleGrid,path)+paths(i,j+1,m,n,obstacleGrid,path);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> path(m,vector<int>(n,-1));
        return paths(0,0,m,n,obstacleGrid,path);
    }
};