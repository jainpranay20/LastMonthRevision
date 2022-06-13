class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++){
            triangle[i][j]=triangle[i][j]+min(triangle[i+1][j],triangle[i+1][j+1]);
        }
    }
        return triangle[0][0];
    }
    
    
    
    
    // int minimumTotal(vector<vector<int>>& triangle) {
    //             for (int level = size(triangle) - 2; level >= 0; level--)	
    //                 // start from bottom-1 level
    //                 for (int i = 0; i <= level; i++)
    //     // for every cell: we could have moved here from same index or index+1 of next level
    //             triangle[level][i] += min(triangle[level + 1][i], triangle[level + 1][i + 1]);
    //             return triangle[0][0];	
    //             // lastly t[0][0] will contain accumulated sum of minimum path
    //         }
        
//         not worked 
//         int n=triangle.size();
//         int mini,sum=0;
//         for(int i=0;i<n;i++)
//         {
//             mini=INT_MAX;
//             for(int j=0;j<=i;j++)
//             {
//                 mini=min(mini,triangle[i][j]);
//             }
//             sum=sum+mini;
//         }
//         return sum;
//    }
};