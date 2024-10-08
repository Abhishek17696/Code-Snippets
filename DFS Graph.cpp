void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
{
    vis[node] = 1;

    ls.push_back(node);

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
    }
}
// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int n, vector<int> adj[])
{
    // Code here
    vector<int> ls;

    int vis[n] = {0};
    int start = 0;

    dfs(start, adj, vis, ls);

    return ls;
}