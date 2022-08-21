class Solution {
public:
    void solve(int open,int close,int n,string str,vector<string> &ans)
    {
        if(str.size()== 2*n)
        {
            ans.push_back(str);
            return;
        }
        if(open<n)
            solve(open+1,close,n,str+'(',ans);
        if(open>close)
            solve(open,close+1,n,str+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        solve(0,0,n,str,ans);
        return ans;
    }
};