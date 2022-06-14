// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
     //  2 pointer approach O(n^2 time complexity) O(1) space
     
     // TLE
    //  vector<long long> ans;
    // int next,i,j;
    // for (i = 0; i < n; i++)
    // {
    //     next = -1;
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             next = arr[j];
    //             break;
    //         }
    //     }
    //     ans.push_back(next);
    // }
    //     return ans;


        
    // trough stack O(n) space O(N) time complexity
    stack<long long> s;
    vector<long long> ans(n);

    for (int i = n - 1;i >= 0;i--) {
        while (s.size() && (s.top() <= arr[i])) s.pop();

        if (s.size() == 0) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends