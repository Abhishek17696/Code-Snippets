
void dfs(int node, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj, vis);
    }
}

int findCircleNum(vector<vector<int>> &isConnected)
{

    // transform into adjacency list
    int n = isConnected.size();
    vector<int> adj[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j and isConnected[i][j] == 1)
                adj[i].push_back(j);
        }
    }

    int cnt = 0;

    vector<int> vis(n, 0);

    //Apply the DFS
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i, adj, vis);
        }
    }
    return cnt;
}

/*

Problem Link
https://leetcode.com/problems/number-of-provinces/description/

*/
