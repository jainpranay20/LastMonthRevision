// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        int count=0,ans=0;
        while(n!=0)
        {
            if(n%2==0)
            {
                n=n/2;
                count=0;
            }
            else if(n%2==1){
                n=n/2;
                count++;
                ans=max(ans,count);
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends