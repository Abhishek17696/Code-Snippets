vector<int> bfsOfGraph(int n, vector<int> adj[])
{
    // Code here
    vector<int> bfs;

    queue<int> q;
    q.push(0);

    int vis[n] = {0};

    vis[0] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return bfs;
}