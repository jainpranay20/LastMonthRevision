class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &cand,int index,int target,int n,vector<int> &arr)
    {
        if(index==n)
        {
            if(target==0)
            {
                ans.push_back(arr);
            }
            return;
        }
        if(target>0)
        {
            arr.push_back(cand[index]);
            solve(ans,cand,index,target-cand[index],n,arr);
            arr.pop_back();
        }
        solve(ans,cand,index+1,target,n,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        int n=candidates.size();
        solve(ans,candidates,0,target,n,arr);
        return ans;
    }
}; 