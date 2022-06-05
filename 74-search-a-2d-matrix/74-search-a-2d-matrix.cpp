class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()|| matrix[0].empty())
            return false;
        int start=0,end=matrix.size()*matrix[0].size()-1,col=matrix[0].size();
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int e=matrix[mid/col][mid%col];
            if(target<e)
                end=mid-1;
            else if(target>e)
                start=mid+1;
            else
                return true;
        }
        return false;
    }
};