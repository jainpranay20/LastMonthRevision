class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);//we are making a vector of numrows X numrows
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i) v[i].push_back(1);
                else v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        return v;
    }
        
        
        // vector<vector<int>> ans1;    
        // for(int i=0;i<numRows;i++)
        // {
        //     vector<int> a(i,1);
        //     for(int j=0;j<=i;j++)
        //     {
        //         if(i==0 or j==i)
        //         {
        //             a[i]=1;
        //         } 
        //         else{
        //             a[i]=ans1[i-1][j-1]+ans1[i-1][j];
        //             //a.push_back(ans[j]);
        //         }
        //     }
        //     ans1.push_back(a);
        // }
        // return ans1;
    
};