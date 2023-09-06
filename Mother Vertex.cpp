class Solution 
{
    public:
    
    void dfs(int i, vector<int>& vis, vector<int> adj[]){
        vis[i] =1;
        for(auto it : adj[i]){
            if(!vis[it]){
                dfs(it, vis, adj);
            }
        }
        return;
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    int ans = 0;
	    vector<int> vis(V,0);
	    for(int i = 0; i< V;i++){
	        if(!vis[i]){
	            ans = i;
	            dfs(i,vis,adj);
	        }
	    }
	    vis = vector<int>(V,0);
	    dfs(ans, vis, adj);
	    for(int x: vis){
	        if(!x){
	            return -1;
	        }
	    }
	    return ans;
	}

};
