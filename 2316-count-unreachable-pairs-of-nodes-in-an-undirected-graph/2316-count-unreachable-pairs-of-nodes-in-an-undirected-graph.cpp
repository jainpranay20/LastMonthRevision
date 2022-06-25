
//      The question can be better understood if one has solved Number of Islands problems.

// Consider, if there is only 1 island, then all nodes can reach other either directly or undirectly, thus answer will be zero.

// Thus,
// Before finding number of islands, we will be building an adjacency list.

// Now,
// For input, n = 7, edges = [[0,2],[0,5],[2,4],[1,6],[5,4]]
// image

// We can see there are 3 islands. For each island, we will find the number of nodes in each island. Now consider in the top island (0,5,2,4), there are 4(count) nodes in island and in total 3 (n-count) nodes not connected to the island.

// So, the number of absent edges will be count*(n-count).

// We will do this for all possible islands and keep adding the above result in a variable.

// In the end, we will divide our result by 2, because if we observe carefully, all the edges are counted twice.

// CODE:

class Solution {
public:
    
    void dfs(int s, vector<int> adj[], vector<int> &vis, long long &count)
    {
        vis[s]=1;
        count++;
        
        for(auto i:adj[s])
        {
            if(vis[i]==0)
            dfs(i,adj,vis,count);
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        int len=edges.size();
        
        vector<int> adj[n];
        for(auto i:edges)
        {
            int x=i[0];
            int y=i[1];
            
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        long long res=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                long long count=0;
                dfs(i,adj,vis,count);
                
                long long unreachable=n-count;
                
                long long z=count*unreachable;
                res+=(z);
            }
        }
        
        return res/2;
        
        
    }
};   