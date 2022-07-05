// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        // kernighams algo 
        
        int counter=0;
        while(n!=0)
        {
            int rsbm=n & -n;   // finding rightmost bit
            n=n-rsbm;
            counter++;
        }
        return counter;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends