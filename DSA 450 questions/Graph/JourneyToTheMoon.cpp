#include <bits/stdc++.h>
using namespace std;

void dfs(int src , vector<int>g[] , vector<int>&vis , int count){
     vis[src] = 1;
     count++;
     for(auto x : g[src]){
         if(!vis[x]){
             dfs(x,g,vis,count);
         }
     }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> g[v];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
 
    int count;
    vector<int>ans;
    vector<int>vis(v,0);
    for(int i = 0; i <v ; i++){
        if(!vis[i]){
            count = 0;
            dfs(i,g,vis,count);
            ans.push_back(count);  // calculating number of elements in each components
        }
    }
    int tc = v*(v-1) /2;   // total number of combination 
    for(int i=0 ; i<ans.size() ; i++){
        int x = (ans[i] * (ans[i] - 1 ) ) / 2 ;    
        tc-=x;     // total number of combination minus number of combination in each group 
    } 
    cout<<tc;   // number of combination of every element with different elements of other components 

    return 0;
}