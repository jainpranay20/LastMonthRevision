class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n,0);
        
        if(k==0)
        {
            return ans;
        }
        else if(k>0)
        {
            if(k>code.size())
                k=k%code.size();
            for(int i=0;i<code.size();i++)
            {
                int j=1;int sum=0;
                while(j<=k)
                {
                    sum+=code[(i+j)%n];
                    j++;
                }
                ans[i]=sum;
            }
        }
        else
        {
            k=-1*k;
            if(k>code.size())
                k=k%code.size();
            for(int i=0;i<code.size();i++)
            {
                int j=1;int sum=0;
                while(j<=k)
                {
                    sum+=code[(i-j+n)%n];
                    j++;
                }
                ans[i]=sum;
            }
        }
        return ans;
        
    }
};