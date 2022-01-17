#include <bits/stdc++.h>
using namespace std;

vector<int> in;
vector<int> out;
int timer = 1;
void dfs(int src, int parent , vector<int>g[]){
    in[src] = timer++;
    for(auto x : g[src]){
        if(x != parent){
            dfs(x , src , g);
        }
    }
    out[src] = timer++;
}

void check(int type , int x ,int y){
    if(in[x] > in[y] && out[y] > out[x]){
        cout<<"yes";
    }else{
        cout<<"no" ;
    }
}
int main()
{ 
    int v,e;
    cin>>v>>e;
    vector<int>g[v];
    for(int i=0;i<e;i++){
        int x ,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,g);
    int x,y; // nodes x->bob location , y->oliver location
    check(1,y,x); // 1 means towards the  mansion ,in this case x should be sub tree of y 
    check(0,x,y); // 0 means away the  mansion , in this case y should be shub tree of x 
    return 0;
}