#include<bits/stdc++.h>
using namespace std;

void findBridge(int src ,int parent , vector<int>g[] , vector<bool> &vis , vector<int>&tin , vector<int>&low,int &timer){
    vis[src] = true;
    low[src]=tin[src]=timer++;
    for(auto x : g[src]){
        if(x == parent) continue;
        if(!vis[x]){
         findBridge(x,src,g,vis,tin,low,timer);
         low[src] = min(low[src],low[x]);    // after dfs return back update the low values for all the recurring nodes..
         if(low[x] > tin[src]){          
            cout<<"found bridge "<<src<<" "<<x;
         }
        }
        else{
            low[src] = min(low[src],tin[x]);      // when all the dfs call is completed compute the low time again for last node ...
        }
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int>g[v];
    for(int i=0 ; i<e ; i++){
   int x , y;
   cin>>x>>y;
     g[x].push_back(y);
     g[y].push_back(x);
    }

    vector<int>tin(v,-1);
    vector<int>low(v,-1);
    vector<bool>vis(v,false);
  int timer = 0;
    for(int i=0 ; i<v ; i++){
        if(!vis[i]){
            findBridge(i,-1,g,vis,tin,low , timer);
        }
    }
}