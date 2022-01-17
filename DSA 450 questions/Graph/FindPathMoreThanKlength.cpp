// find the path more than k lenght from the source node and

// find every path and if we find path less then k backtrack and go to some other one  
#include <bits/stdc++.h>
using namespace std;


int solve(int src ,int K ,vector<bool>&vis, vector<pair<int,int>>g[]){
 vis[src] = true;
 if(K <= 0) return true;  // if distance of k is 0 that means we find a path ..

    for(auto x : g[src]){
        int v = x.first;  // destination node
        int wt = x.second;     // weight
        if( vis[v] == true) continue;   // if we find a loop , then we dont continue to that path
        if(wt >= K) return true;    // when we find distance more than k 
         if(solve(v,K-wt,vis,g)){
             return true;
         }
    }
    vis[src] = false;  // bactracking the path since we dont find path greater than k now finding other Path
    return false;

}

int main(){
int v,e;
cin>>v>>e;
int k;
cin>>k;
vector<pair<int,int>>g[v+1];
for(int i=0;i<e;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
   g[x].push_back({y,wt});
   g[y].push_back({x,wt});
}
vector<bool>vis(v+1,false);
cout<<solve(1,k,vis,g);
}