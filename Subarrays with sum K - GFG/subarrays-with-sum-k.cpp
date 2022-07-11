// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        unordered_map<int,int> mp;
        mp[0]=1;int ans=0,sum=0,rsum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+Arr[i];
            rsum=sum-k;
            if(mp.find(rsum)!=mp.end())
            {
                ans=ans+mp[rsum];
                mp[sum]++;
            }
            else
            {
                mp[sum]++;
            }
            //ans=max(ans,i-mp[sum-k]);
        }
        // for(auto i:mp)
        // {
          // cout<< i.second;
        // }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends