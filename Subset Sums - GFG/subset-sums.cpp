// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void solve(vector<int> &arr, int N,int index,int sum,vector<int> &ans)
    {
        if(index==N)
        {
            ans.push_back(sum);
            return;
        }
        solve(arr,N,index+1,sum+arr[index],ans);
        solve(arr,N,index+1,sum,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Time Complexity: O(2^n)+O(2^n log(2^n))
        // Space Complexity: O(2^n)
        vector<int> ans;
        int sum=0;
        solve(arr,N,0,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends