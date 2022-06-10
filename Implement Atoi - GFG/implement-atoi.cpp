// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string A) {
    // in c++,in-built functions are:
    // strtol() - Convert string to long integer.
    // stoi() - Convert string to integer.
    // stoll() - Convert string to long long.
    // stol() - -Convert string to long int.
    // stoull() - Convert string to unsigned integer.
        int i=0,sign=1;
        if(A[i]=='-'){
            sign=-1;
            i++;
        }
        int ans=0; 
        while(A[i]){
            if(!(A[i]-'0' >=0 and A[i]-'0'<=9)) return -1;
            ans = ans*10 + A[i]-'0'; 
            i++;
        }
        
        return ans*sign;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends