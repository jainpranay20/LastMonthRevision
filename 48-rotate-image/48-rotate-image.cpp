class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // acha explanation h yeh
        // https://leetcode.com/problems/rotate-image/discuss/1449737/Rotation-90Code-180-270-360-explanation-Inplace-O(1)-Space
        
       // // int ans[matrix[0].size()][matrix.size()-1];
       //  for(int j=0;j<matrix[0].size();j++)
       //  {
       //      for(int i=matrix.size()-1;i>=0;i--)
       //      {
       //          cout<<matrix[i][j];
       //      }
       //  }
        
        
        
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=i;j<matrix[0].size();j++)
//             {
//                 int temp=matrix[i][j];
//                 matrix[i][j]=matrix[j][i];
//                 matrix[j][i]=temp;
//             }
//         }
//         int n=matrix.size();
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[0].size()/2;j++)
//             {
//                 int temp=matrix[i][j];
//                 matrix[i][j]=matrix[i][n-j-1];
//                 matrix[i][n-j-1]=temp;
//             }
//         }
        
		// complement of matrix 
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i) {
		// 2 Pointer approach :  just like we do in 1D array we take left and right pointers
		// and swap the values and then make those pointers intersect at some point.
            int left = 0, right = n-1;
            while(left < right) {
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        }
    }
            
};