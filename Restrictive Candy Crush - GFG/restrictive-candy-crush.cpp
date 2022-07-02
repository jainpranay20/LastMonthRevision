// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    stack<pair<char,int>> st;
    string Reduced_String(int k,string s){
        // Your code goes here
       
        int i=0;
        while(i<s.size())
        {
           if(st.empty())
           {
               st.push({s[i],1});
           }
           else if(s[i]!=st.top().first)
           {
               st.push({s[i],1});
           }
           else if(s[i]==st.top().first)
           {
               st.push({s[i],st.top().second+1});
               //cout<<st.top().second<<" ";
           }
           
           
           if(st.top().second==k)
           {
               
               for(int i=0;i<k;i++)
               {
                   st.pop();
               }
               //cout<<st.top().second;
           }
           i++;
        }
        string res="";
        while(st.size())
        {
            res+=st.top().first;
            st.pop();
        }
        
        // i=0;
        // while(i<st.size())
        // {
        //   res=res+st.top().first; 
        //   i++;
        // }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends