#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,m,src;
   cin>>n>>m;
   vector<pair<int ,int>>g[n+1];
   int a,b,wt;
   cout<<"graph inputs";
   for(int i=0 ; i<m ; i++){
    cin>>a>>b>>wt;
    g[a].push_back({b,wt});
    g[b].push_back({a,wt});
   }

   cin>>src;

// dijsktras   Algorithm starts here ...
priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq; // for minimum distance(dis,node)
vector<int>dis(n+1,INT_MAX);

dis[src] = 0;
pq.push({0,src});

while(!pq.empty()){
    int dist = pq.top().first;
    int node = pq.top().second;
    pq.pop();
    for(auto i : g[node]){
        int x = i.first;
        int y = i.second;
        if(dis[x] > dis[node] +y ){
           dis[x] = dis[node] + y;
           pq.push({dis[x] , x});
        }
    }
}

for(int i = 1 ; i<=n ; i++){
    cout<<dis[i]<<" ";
}

    return 0;
}
