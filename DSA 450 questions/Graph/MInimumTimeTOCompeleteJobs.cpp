#include<bits/stdc++.h>
using namespace std;
int main(){

 int e,v;
 cin>>e>>v;
 vector<int>g[v+1];
 vector<int>in(v+1,0);
 int x,y;
 for(int i=0 ; i<v ; i++){
   cin>>x>>y;
   g[x].push_back(y);
   in[y]++;   // indegree 
 }

 queue<int>q;     
 vector<int>ans(v+1,0);      // answer  vector

 for(int i=1;i<=v;i++){
    if(in[i] ==0 )      // indegree with 0 means they will complete jobs in 1 time 
        q.push(i) ;
        ans[i] = 1;
 }

 while(!q.empty()){
     int val = q.front();
     q.pop();
     for(auto x : g[val]){
         in[x]--;
         if(in[x] == 0){
             q.push(x) ;
             ans[x] = ans[val] + 1;  // current time plus all indegree that is its  parent 
         }
     }
 }

    return 0;
}