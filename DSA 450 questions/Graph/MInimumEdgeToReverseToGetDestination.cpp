#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<pair<int, int>> g[];

public:
    Graph(int v)
    {
        V = v;
        vector<pair<int, int>> g[V];
    }
    void addEdge(int src, int des, int wt)
    {
        g[src].push_back({des, wt});
    }
    vector<int> ShortstPath(int src)
    {
        priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq; // for minimum distance(dis,node)
        vector<int>dis(V+1,INT_MAX);

        pq.push({0,src});
        dis[src] = 0;
        while(!pq.empty()){
            int dist = pq.top().first;
            int u = pq.top().second;
            for(auto x : g[src]){
                int v = x.first;
                int wt = x.second;
                if(dis[v] > dis[u] + wt){
                    dis[v] = dis[u] + wt;
                    pq.push({dis[v] , wt});
                }
            }
        }
        return dis;
    }


Graph createNewGraph(int edge[][2], int e, int ve)
{
    Graph G(ve);
  // making one more edge which is opposite to the original one
    for (int i = 0; i < e; i++)
    {
        G.addEdge(edge[i][0], edge[i][1], 0);  // asssiging orginal edge wt as 0
        G.addEdge(edge[i][1], edge[i][0], 1);// asssiging new edge wt as 1
    }
    return G;
}

int getMinEdgeReversal(int edge[][2], int e, int v, int src, int des)
{
    Graph G = createNewGraph(edge, e, v); // create new edges
    vector<int> dis = G.ShortstPath(src); // preform dijsktrasAlgorithm
   
    if(dis[des] == INT_MAX){ 
        return -1;
    }else{
        return dis[des];
    }
}
};
int main()
{

    int V = 7;
    Graph g(V);

    int edge[][2] = {{0, 1}, {2, 1}, {2, 3}, {5, 1}, {4, 5}, {6, 4}, {6, 3}};
    int E = sizeof(edge) / sizeof(edge[0]);

  // first create new edges and the perform dijsktrasAlgorithm ...
    int minEdgeToReverse = g.getMinEdgeReversal(edge, E, V, 0, 6);

    if (minEdgeToReverse != -1)
        cout << minEdgeToReverse << endl;
    else
        cout << "Not Possible." << endl;

    return 0;
}