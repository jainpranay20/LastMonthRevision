class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        if(s.size()==0)
            return 0;
        int i=0;
        int count=1;
        int res=1;
        while(i<n-1)
        {
            if((s[i]+1)==s[i+1])
            {
                count++;
                res=max(res,count);
            }
            else
            {
                count=1;
            }
            i++;
        }
        return res;
    }
};