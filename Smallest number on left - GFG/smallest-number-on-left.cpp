// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int A[]){
    stack<int> st;
    vector<int> ans;
    if(n==0)
        return ans;
    ans.push_back(-1);
    st.push(A[0]);
    
    for(int i=1;i<n;i++)
    {    
        while(!st.empty() && st.top()>=A[i])
        {
            st.pop();
        }
            if(!st.empty())
            ans.push_back(st.top());
            else if(st.empty())
            ans.push_back(-1);
        // if(st.empty() && st.top()<A[i])
        // {
        //     ans.push_back(-1);
        // }
        st.push(A[i]);
    }
    return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends