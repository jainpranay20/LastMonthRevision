// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        // code here 
        vector<vector<bool>> dp(s.length(),vector<bool>(s.length(),false));
        int begin=0,length=1,distance=0;
        for(int i=0;i<s.length();i++)
        {
            dp[i][i]=true;
            for(int j=i-1;j>=0;j--)
            {
                if(s[i]==s[j] && (i-j==1 || dp[j+1][i-1]==true))
                   {
                       dp[j][i]=true;
                       distance=i-j+1;
                       if(distance>length)
                       {
                           length=distance;
                           begin=j;
                       }
                   }
                   else
                   dp[j][i]=false;
            }
        }
                   return s.substr(begin,length);
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends