#include <bits/stdc++.h>
using namespace std;

int main(){
    int vertices , edges ;
    cin>>vertices>>edges ;
    vector<vector<int>>g(vertices);
    for(int i =0 ; i<edges ; i++){ 
        int x ,  y ;
        cin>>x>>y ;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int  res[vertices]; // vertex color array 
    bool color[vertices]; // for checking adjecent vertex color 

    res[0] = 0;
    for(int i= 1 ; i<vertices ; i++) res[i] = -1;
    for(int i=0 ; i<vertices ; i++) color[i] = false;

int cn = 0;

for(int i=1 ; i<vertices ; i++) {
    for(auto x : g[i]){
      if(res[x] != -1){  // check for all adjacent nodes
          color[res[x]] = true; // store true that no other adjacent vertice ave same color
      }
    }
    int cr = 0;
    for(cr = 0 ; cr<vertices ; cr++) {
        if(color[cr] == false){    // first color value which not same as its adjacent node
            break;
        }
    }
    res[i] = cr;
    cn = max(cn,cr+1);
    for(auto x : g[i]){
      if(res[x] != -1){
          color[res[x]] = false; // reset the color
      }
}
cout<<"number of colored used"<<cn;
for(int i =0 ; i<vertices; i++){
    cout<<res[i]<<" ";
}
    
    return 0;
}