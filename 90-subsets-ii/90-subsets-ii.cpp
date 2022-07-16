class Solution {
public:
    void solve(vector<vector<int>> &all,vector<int> &ans,vector<int> &nums,int index,int N)
    {
        if(index==nums.size())
        {
            all.push_back(ans);
            return ;
        }
        ans.push_back(nums[index]);
        solve(all,ans,nums,index+1,N);
        ans.pop_back();
        index++;
        while(index<=nums.size()-1 && nums[index]==nums[index-1])
            index++;
        solve(all,ans,nums,index,N);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> all;
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        solve(all,ans,nums,0,n);
        return all;
    }
};