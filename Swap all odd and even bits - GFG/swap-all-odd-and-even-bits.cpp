// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	  //0xAAAAAAAA means 10101010101010101010101010101010 in binary.
       //we get all even bits of n.
       //0x55555555 means 01010101010101010101010101010101 in binary.
    //we get all odd bits of n.
       
    return ((n&(0xAAAAAAAA))>>1)|((n&(0x5555555))<<1);
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends