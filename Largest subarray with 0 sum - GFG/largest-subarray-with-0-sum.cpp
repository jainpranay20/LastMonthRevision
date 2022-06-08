// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // time complexity O(nlogn) n for traversal logn for search in map 
        // space complexity O(n)
        int ans = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1; // nice case if we donot write this line it will fail in
        // the case of -1 1 -1 1   try once nice logic
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (mp.find(sum) != mp.end())
                ans = max(ans, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return ans;
        
        
        
        
        //  TLE
        // int maxi=0;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum=sum+A[j];
        //         if(sum==0)
        //         maxi=max(maxi,j-i+1);
        //     }
        // }
        // return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends