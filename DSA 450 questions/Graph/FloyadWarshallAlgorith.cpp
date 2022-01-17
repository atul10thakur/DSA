#include<bits/stdc++.h>
using namespace std;

int main(){

   // let asssume we have distance dist graph of 2d matrix...
   int nodes;
   int dist[4][4] ;  // adjcencyMatrix for distance 

   // floyd warshall algorithm starts here ..
   // here we add a third node from src to dest and then check it gives shorter path ot not
   for(int k =0 ; k<nodes ; k++){
       for(int i =0 ; i<nodes ; i++){
           for(int j =0 ; j<nodes ; j++){
               if(dist[i][k] + dist[k][j]  < dist[i][j] ) {  // checking by adding third node it give shorter or not 
                   dist[i][j] = dist[i][k] + dist[k][j]  ;  // update distance
               }
           }
       }
   }
}