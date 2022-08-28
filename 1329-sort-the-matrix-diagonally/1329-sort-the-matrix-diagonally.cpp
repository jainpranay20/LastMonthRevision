class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int,priority_queue<int,vector<int>,greater<int>>> diag;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                diag[i-j].push(mat[i][j]);
            }
        }
         for (int i = 0; i < mat.size(); i++) 
         {
            for (int j = 0; j < mat[0].size(); j++) 
            {
                mat[i][j] = diag[i - j].top();
                diag[i - j].pop();
            }
        }
        return mat;
    }
};