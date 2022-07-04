class Solution {
public:
    // void solve(vector<vector<int>> &ans,vector<int> &cand,int index,int target,int n,vector<int> &arr)
    // {
    //     if(index==n)
    //     {
    //         if(target==0)
    //         {
    //             ans.push_back(arr);
    //         }
    //         return;
    //     }
    //     if(target>0)
    //     {
    //         arr.push_back(cand[index]);
    //         solve(ans,cand,index,target-cand[index],n,arr);
    //         arr.pop_back();
    //     }
    //     solve(ans,cand,index+1,target,n,arr);
    // }
    // vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    //     vector<vector<int>> ans;
    //     vector<int> arr;
    //     int n=candidates.size();
    //     solve(ans,candidates,0,target,n,arr);
    //     return ans;
    // }
    
    
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target,int i,int sum,vector<int> temp)
    {
        
        if(target==sum )
        {
            ans.push_back(temp);
            return;
        }
        if(sum>target || i>=candidates.size())
            return;
        temp.push_back(candidates[i]);
        solve(candidates,target,i,sum+candidates[i],temp);
        temp.pop_back();
        solve(candidates,target,i+1,sum,temp);
      
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int> temp;
        solve(candidates,target,0,0,temp);
        return ans;
    }
    
}; 