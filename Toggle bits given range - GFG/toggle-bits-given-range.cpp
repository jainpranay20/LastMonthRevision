// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // code here
        int t=pow(2,(R-L+1))-1;
        N=N^(t<<(L-1));
        return N;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends