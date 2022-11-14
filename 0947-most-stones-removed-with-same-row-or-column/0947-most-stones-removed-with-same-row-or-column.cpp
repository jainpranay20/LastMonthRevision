class Solution {
public:
    int helper(vector<vector<int>>& stones, int i, vector<int> &visited, int n)
    {
        visited[i]=1;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==0 && (stones[j][0]==stones[i][0] || stones[j][1]==stones[i][1]))
                ans=ans+helper(stones,j,visited,n)+1;
        }
        return ans;
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int ans=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==1)
                continue;
            ans+=helper(stones,i,visited,n);
        }
        return ans;
    }
};