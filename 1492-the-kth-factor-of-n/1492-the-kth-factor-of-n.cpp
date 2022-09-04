class Solution {
public:
    int kthFactor(int n, int k) {
        if(n==0)
            return -1;
        vector<int> ans;
        ans.push_back(1);
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
                ans.push_back(i);
        }
        if(k>ans.size())
            return -1;
        else
            return ans[k-1];
    }
};