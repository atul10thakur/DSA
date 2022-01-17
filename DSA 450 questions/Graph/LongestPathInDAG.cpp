#include <bits/stdc++.h>
using namespace std;

// here we first find  traversal order (topological sort)
// then travel the graph and relax the weights according to the sorted order 

void topologicalSort(int src , vector<int>&vis, vector<vector<pair<int, int>>>&g ,  vector<int>&order){
    vis[src] = 1;
    for(auto x : g[src]){
        if(!vis[x.first]){
            topologicalSort(x.first , vis,g,order);
        }
    }
    order.push_back(src);
}

int main()
{
    int v, e;
    cin >> v >> e;
    int src;
    cin >> src;
    vector<vector<pair<int, int>>> g(v);
    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back({y, wt});
    }
     vector<int>order;     // used for storing topologial order of graph elements 
    vector<int>vis(v,0);      // for checking whether element is visited or not
    for(int i=0 ; i < e ; i++){
        if(!vis[i]){
            topologicalSort(i,vis,g,order);
        }
    }

    vector<int>dist(v,INT_MIN);
    dist[src] = 0;
    for(int i=v-1 ; i>=0 ; i++){
          if(dist[order[i]] != INT_MIN){
              for(auto x : g[order[i]]){
                  int u = dist[order[i]]; // src node distance
                  int wt = x.second;        // wt 
                  int v = dist[x.first];    // destination node distance
                  if(u + wt  > v){  // if src + wt is greater than the current distance of destination node then update distance
                      dist[x.first] = u+wt;
                  }
              }
          }
    }
    return 0;
}