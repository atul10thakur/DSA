#include <bits/stdc++.h>
using namespace std;
#define V 6

int selectMinVertex(vector<int> & edgeWt , vector<bool> &InMSt){
    int vertex ;
    int minimum =INT_MAX;
    for(int i = 0 ; i<V ; ++i){
        if(InMSt[i] == false && edgeWt[i] < minimum){
            minimum = edgeWt[i];
            vertex = i;
        }
    }
    return vertex;
}

void MST(int graph[V][V])
{
    int parent[V];                  // for storing parent node
    vector<int> edgeWt(V, INT_MAX); // for storing edge weight relaxtion bewtween different nodes...
    vector<bool> InMST(V, false);   // check if MST already contain node or not
    // let assume the source node be 0 
    parent[0] = -1;
    edgeWt[0] = 0;
 // MST contain  (V-1) edges
    for (int i = 0; i < V - 1; ++i)
    {

        int u = selectMinVertex(edgeWt, InMST); // give the vertex which have min weight from current node ...
        InMST[u] = true;

        // relax (update) all the vertex with respect to the minWtvertex
        for (int j = 0; j < V; ++j)
        {
            // relaxing j node which is directed from the u node ...
            //   graph[u][j] != 0 check if there is a edge
            // InMST[j] = false if its note present in MST since MST nodes have already minimum weight 
            // graph[u][j] < edgeWt[j] current edge weight is more then the new edge weight from node u 
            if (graph[u][j] != 0 && InMST[j] == false && graph[u][j] < edgeWt[j])
            {
                edgeWt[j] = graph[u][j] ;
                parent[j] = u;
            }
        }
    }
    for(int i=1;i<V;++i) {
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";
}
}

int main()
{
    int graph[V][V] = {{0, 4, 6, 0, 0, 0},
                       {4, 0, 6, 3, 4, 0},
                       {6, 6, 0, 1, 8, 0},
                       {0, 3, 1, 0, 2, 3},
                       {0, 4, 8, 2, 0, 7},
                       {0, 0, 0, 3, 7, 0}};

    MST(graph);
    return 0;
}
