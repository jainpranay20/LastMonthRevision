class Solution {
public:
    bool bibfs(int src,vector<vector<int>> adj,int color[])
    {
        queue<int> q;
        q.push(src);
        color[src]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
        
        for(auto i:adj[node])
        {
            if(color[i]==-1)
            {
                color[i]=1-color[node];
                q.push(i);
            }
            else if(color[i]==color[node])
            return false;
        }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // Code here
        int V=graph.size();
	    int color[V];
	    memset(color,-1,sizeof color);
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
            {
                if(!bibfs(i,graph,color))
                return false;
	        }
	    }
	    return true;
	}
};