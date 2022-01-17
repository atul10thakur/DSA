
int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
{
    vector<vector<pair<int, int>>> g(n);
    for (auto x : flights)
    {
        g[x[0]].push_back({x[1], x[2]});
    }
    priority_queue
}