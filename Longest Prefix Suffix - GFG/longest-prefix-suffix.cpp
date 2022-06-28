// { Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    int n=s.size();
	    vector<int> lpss(n);
	    int i=0,j=1;
	    lpss[0]=0;
	    while(j<n)
	    {
	        if(s[i]==s[j])
	        {
	            i++;
	            lpss[j]=i;
	            j++;
	        }
	        else 
	        {
	            if(i!=0)
	            i=lpss[i-1];
	            else
	            {
	                lpss[j]=0;
	                j++;
	            }
	        }
	    }
	    return lpss[n-1];
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends