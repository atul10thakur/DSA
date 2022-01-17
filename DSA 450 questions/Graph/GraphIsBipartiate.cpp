#include<bits/stdc++.h>
using namespace std;

void dfs(int src , int parent , int color , vector<int>g[] , vector<int>vis , int &f){
vis[src] = color;
for(auto x : g[src]){
    if(vis[x] == -1){
      dfs(x,src,3-color,g,vis,f);
    }
    else{
        if(vis[x] == color && parent != x){
            f = 1;
            break;
        }
    }
}
}

int main(){

  int v ,  e;
  cin>>v>>e;
  vector<int>g[v];
  for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
int f = 0;
vector<int>vis(v,-1);
dfs(0,0,1,g,vis,f);
if(f) cout<<"Not bipartiate ...";
else cout<<"Is bipartiate ..."; 
    return 0;
}

