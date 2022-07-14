// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        // your code here
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(roll[j]>roll[j+1])
                {
                    swap(roll[j],roll[j+1]);
                    ans=ans+2;
                }
            }
        }
        int min=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+marks[i];
        }
        min=(sum-ans)/n;
        return min>avg?1:0;
    }
    
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}
  // } Driver Code Ends