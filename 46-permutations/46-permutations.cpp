class Solution {
public:
    void permutation(vector<int>& nums,vector<vector<int>>& ans,int i,int n)
    {
        if(i==n)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<=n;j++)
        {
            swap(nums[i],nums[j]);
            permutation(nums,ans,i+1,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        permutation(nums,ans,0,n-1);
        return ans;
    }
};