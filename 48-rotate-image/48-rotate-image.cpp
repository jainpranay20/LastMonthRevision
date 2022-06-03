class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       // // int ans[matrix[0].size()][matrix.size()-1];
       //  for(int j=0;j<matrix[0].size();j++)
       //  {
       //      for(int i=matrix.size()-1;i>=0;i--)
       //      {
       //          cout<<matrix[i][j];
       //      }
       //  }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[0].size();j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size()/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
            }
        }
        
                
    }
};