class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     if(matrix.empty()|| matrix[0].empty())
    //         return false;
    //     int start=0,end=matrix.size()*matrix[0].size()-1;
    //     while(start<=end)
    //     {
    //         int mid=start+(end-start)/2;
    //         int e=matrix[mid/end][mid%end];
    //         if(target<e)
    //             end=mid-1;
    //         else if(target>e)
    //             start=mid+1;
    //         else
    //             return true;
    //     }
    //     return false;
    // }
        
        vector<vector<int>> ans;
        int j=matrix[0].size()-1;
        int r=matrix.size()-1,i=0;
            while(i<r && matrix[i][j]<target)i++;
            while(j>0 && matrix[i][j]>target)j--;
            if(target==matrix[i][j])
                return true;
            else 
                return false;
    }
};