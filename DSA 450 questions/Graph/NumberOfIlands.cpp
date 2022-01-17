 void dfs(int r , int c,vector<vector<char>>& grid ,int vis[][501],int m,int n){

  if(r >= m || c >= n || r < 0 || c < 0 ) return;
  if(grid[r][c] == '0') return;
  if(!vis[r][c]){
    vis[r][c] = 1;
    dfs(r+1,c,grid,vis,m,n);
    dfs(r-1,c,grid,vis,m,n);
    dfs(r,c+1,grid,vis,m,n);
    dfs(r,c-1,grid,vis,m,n);
    dfs(r+1,c+1,grid,vis,m,n);
    dfs(r-1,c-1,grid,vis,m,n);
    dfs(r-1,c+1,grid,vis,m,n);
    dfs(r+1,c-1,grid,vis,m,n);
  }
}

int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int vis[501][501];
    for(int i=0;i<m ; i++){
        for(int j=0;j<n;j++){
            vis[i][j] = 0;
        }
    }
   int c  =  0;
   for(int i=0;i<grid.size();i++){
   for(int j=0;j<grid[i].size();j++){
       if(!vis[i][j] && grid[i][j]=='1'){
           dfs(i,j,grid,vis,m,n);
           c++;
       }
   }
}
return c;
    }