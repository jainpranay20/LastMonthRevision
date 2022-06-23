// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
string reverse(string strn,int i,int n,string ros)
{
    if(i==n)
    return strn.substr(n,1);
    string a=reverse(strn,i+1,n,ros);
    string b=a+strn.substr(i,1);
    return b;
}
string reverseWord(string str){
    int n=str.size();
    string ros=" ";
   return ros= reverse(str,0,n-1,ros);
  //Your code here
}