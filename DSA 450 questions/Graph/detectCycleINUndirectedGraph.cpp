  bool checkCycle(int src, int parent, vector<int> &vis, vector<int> adj[], int V)
{
    vis[src] = 1;
    for (int x : adj[src])
    {
        if (!vis[x])
        {
            if (checkCycle(x, src, vis, adj, V))
            {
                return true;
            }
        }
        else if (x != parent)
        {
            {
                return true;
            }
        }
    }
        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        int parent = -1;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkCycle(i, parent, vis, adj, V))
                {
                    return true;
                }
            }
        }
        return false;
    }