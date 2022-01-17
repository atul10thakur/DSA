#include<bits/stdc++.h>
using namespace std;

// bellmanford works for +ve and negative graph but not work if the graph contain negative cycle since it will always give smaller value
struct Node{
    int src;
    int dest;
    int wt;
    Node(int u , int v , int w){
        src = u;
        dest = v;
        wt = w;
    }
};

int main(){
   int  nodes, edges;
   int src , dest , wt;
   cin>>nodes>>edges;
   vector<Node>Edge;
   for(int i=0 ; i<edges ; i++){
        cin>>src>>dest>>wt;
        Edge.push_back(Node(src,dest,wt));
   }
   int src;
   cin>>src;
   vector<int>dist(nodes,INT_MAX);
   dist[0] = 0;

// algorithms starts ...
// relax all the edges n-1 times 
// let we have 0,1,2,3,4,5 then relax 1,2,3,4,5 edges to n-1 time i.t 5 times
   for(int i = 1 ; i<=nodes-1 ; i++){
       for(auto x : Edge){
            if(dist[x.src]==INT_MAX) // if the source distacne is infinity ...
	           { continue ;  } 
            if(dist[x.src] + x.wt < dist[x.dest]){
                dist[x.dest] = dist[x.src] + x.wt;
            }
       }
   }
   int f = 0;
   // if relaxing one more time gives a lesser value of distance then the graph contain negative cycle therefore we cant compute distance 
    for(auto x : Edge){
            if(dist[x.src] + x.wt < dist[x.dest]){
                cout<<"graph contain negative cycle..";
                f = 1;
                break;
            }
       }
    if(!f){
        for(int i=0;i<nodes ; i++){
            cout<<i<<" "<<dist[i]<<" ";
        }
    }   
    return 0;
}