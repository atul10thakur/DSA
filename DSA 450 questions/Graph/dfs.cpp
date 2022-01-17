 
 
 
 
 void dfs(vector<int>&vis , int src , vector<int>adj[],vector<int>&ans){
        vis[src] = 1;
        ans.push_back(src);
        for(int x : adj[src]){         // adjcent node ... 
            if(!vis[x]){
                dfs(vis,x,adj,ans);       // other level of nodes..
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>vis(V,0);
        dfs(vis,0,adj,ans);
        return ans;
        
    }