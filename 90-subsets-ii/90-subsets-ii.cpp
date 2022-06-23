class Solution {
public:
     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;       //to store all susbets
        vector<int> curr;         //to store current individual subset (that we will build)
        sort(nums.begin(),nums.end());      //sort the array so that duplicates are adjacent 
        helper(nums,ans,curr,0);       //we start from index 0
        return ans;
        
    }
    
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx){
        ans.push_back(curr);       //we include current susbet into final ans
        for(int i=idx;i<nums.size();i++){     //check for all possibilites
            if(i>idx &&  nums[i]==nums[i-1]) continue;      //if duplicate then we continue
            curr.push_back(nums[i]);     //we include nums[i] in current subset
            helper(nums,ans,curr,i+1); 
            curr.pop_back();         //to get subset without nums[i]
        }
    }  
};
// void solve(vector<int> &arr, int N,int index,vector<vector<int>> &all,vector<int> &ans,set<vector<int>> &res)
//     {
//         if(index==N)
//         {
//             res.insert(ans);
//             return;
//         }
//         ans.push_back(arr[index]);
//         solve(arr,N,index+1,all,ans,res);
//         ans.pop_back();
//         solve(arr,N,index+1,all,ans,res);
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& arr) {
//         vector<vector<int>> all;
//         vector<int> ans;
//         set<vector<int>> res;
//         int N=arr.size();
//         sort(arr.begin(),arr.end());
//         solve(arr,N,0,all,ans,res);
//         for(auto i:res)
//             all.push_back(i);

//         return all;