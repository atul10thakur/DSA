#include <bits/stdc++.h>
using namespace std;

int *findcoordinates(int curr, int n) {
        int *arr = new int[2]; 
        int r = n - (curr - 1) / n -1;
        int c = (curr - 1) % n;
        if (r % 2 == n % 2) {
            arr[0] = r ;
            arr[1] = n - 1 - c;
            return arr;
        } else {
            arr[0] = r ;
            arr[1] = c;
            return arr;
        }
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int size = board.size();
   int steps = 0;
   vector<vector<bool>>vis(size,vector<bool>(size,false));
   queue<int>q;
   q.push(1);
   vis[size-1][0] = true;
   while(!q.empty()){
       int qsize = q.size();
       for(int i=0 ; i<qsize ; i++){
          int x = q.front();
          if(x == size*size) return steps;   // if we reach at the finial point
          for(int k=1 ; k<= 6 ; k++){ // dice values ...
              if(x+k > size*size) break;  // if we reach more than the ponit we want to reach   
              int *co = findcoordinates(x+k , size);
              int r  = co[0];
              int c = co[1];
              if(vis[r][c] == true) continue; // if board number is already visited
              vis[r][c] = true;
              if(board[r][c] == -1){   // if their is no snake or ladder so just add the current number and dice 
                  q.push(x+k);  // dice + current place number 
              }else{
                  q.push(board[r][c]);   // if their is snake or ladder then take value of the board 
              }
          }
       }
       steps++;
   }

     return -1;
    }
}

int main(){

int board[6][6] = {
    {-1,-1,-1,-1,-1,-1} ,
    {-1,-1,-1,-1,-1,-1} ,
    {-1,-1,-1,-1,-1,-1} ,
    {-1,35,-1,-1,13,-1} ,
    {-1,-1,-1,-1,-1,-1} ,
    {-1,15,-1,-1,-1,-1}
    } ;

    cout<<"ans " <<snakeAndladder(board);
   return 0;
}
