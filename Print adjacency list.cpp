class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> adjList(V);
        
        for(auto edge : edges){
            int u = edge.first;
            int v = edge.second;
            
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        return adjList;
    }
};
