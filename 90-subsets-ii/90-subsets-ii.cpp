class Solution {
public:
    //my code remember it
 void solve(vector<int> &arr, int N,int index,vector<vector<int>> &all,vector<int> &ans,set<vector<int>> &res)
    {
        if(index==N)
        {
            res.insert(ans);
            return;
        }
        ans.push_back(arr[index]);
        solve(arr,N,index+1,all,ans,res);
        ans.pop_back();
        solve(arr,N,index+1,all,ans,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<vector<int>> all;
        vector<int> ans;
        set<vector<int>> res;
        int N=arr.size();
        sort(arr.begin(),arr.end());
        solve(arr,N,0,all,ans,res);
        for(auto i:res)
            all.push_back(i);

        return all;
    }
};



