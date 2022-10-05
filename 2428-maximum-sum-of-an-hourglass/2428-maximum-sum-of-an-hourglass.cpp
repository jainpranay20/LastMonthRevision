class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=INT_MIN;
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<m-2;j++)
            {
                int sum=0;
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if((k==1 and l==0) ||(k==1 and l==2))
                            continue;
                        sum=sum+grid[k+i][l+j];
                        res=max(res,sum);
                    }
                }
            }
        }
        return res;
    }
};