// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        stack<string> st;
        string ch="";
        for(int i=0;i<s.length();i++)
        {
            string word="";
            while(s[i]!='.' and i<s.length())
            {
                word=word+s[i];
                i++;
            }
            st.push(word);
            if(i<s.length())
            st.push(".");
        }
        while(!st.empty())
        {
            ch=ch+st.top();
            st.pop();
        }
        return ch;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends