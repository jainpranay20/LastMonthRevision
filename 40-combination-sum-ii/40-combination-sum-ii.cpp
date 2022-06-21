class Solution {
public:
    vector<vector<int>> result;
    
    void comsum(vector<int> &curr, int target, int sum, vector<int> &candidates, int curInd, int n){
        if(target == sum){
            result.push_back(curr);
            return;
        }
        else if(sum>target){
            return;
        }
        
        for(int i = curInd; i < n; i++){
            if(i != curInd && candidates[i]==candidates[i-1])               //to avoid picking up the same combnations i.e. we don't pick same element for certain kth position of a combination 
                continue;
            sum += candidates[i];
            curr.push_back(candidates[i]);
            comsum(curr, target, sum, candidates, i+1, n);
            sum -= candidates[i];
            curr.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        comsum(curr, target, 0, candidates, 0, n);
        return result;
    }
};


// TLE
// void solve(vector<vector<int>> &ans,vector<int> &cand,int index,int target,int n,vector<int> &arr,set<vector<int>> &st)
//     {
//         if(index==n)
//         {
//             if(target==0)
//             {
//                 st.insert(arr);
//             }
//             return;
//         }
//         if(target>0)
//         {
//             arr.push_back(cand[index]);
//             solve(ans,cand,index+1,target-cand[index],n,arr,st);
//             arr.pop_back();
//         }
//         solve(ans,cand,index+1,target,n,arr,st);
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> arr;
//         set<vector<int>> st;
//         int n=candidates.size();
//         sort(candidates.begin(),candidates.end());
//         solve(ans,candidates,0,target,n,arr,st);
//         for(auto i:st)
//             ans.push_back(i);
//         return ans;