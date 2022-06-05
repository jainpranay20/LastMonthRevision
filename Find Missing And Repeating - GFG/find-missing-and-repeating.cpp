// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
       int count[n+1];
       memset(count,0,sizeof(count));
       for(int i=0;i<n;i++)
       {
           count[arr[i]]++;
       }
       int *ans=new int[2];
       for(int i=1;i<=n;i++)
       {
           if(count[i]==0)
             ans[1]=i;
            if(count[i]==2)
            ans[0]=i;
       }
       return ans;
       
        // int *res = new int[2];
        
        // unordered_map<int, int> mp;
        
        // for (int i=0; i<n; i++){
        //     mp[arr[i]]++;
        // }
        
        // for (int i=1; i<=n; i++){
        //     if(mp[i]==2)
        //         res[0] = i;
        //     else if(mp[i]==0)
        //         res[1] = i;
        // }
        
        // return res;
   //   “new” is a keyword in C++ that is responsible for Dynamically allocated memory.

//“new int” would Dynamically allocate memory for an integer and return it`s address to the variable that is declared at the right side of “new int”


       
       
    }
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends