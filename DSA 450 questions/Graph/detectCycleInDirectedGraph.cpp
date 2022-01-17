
// dfsVis is used for checking their is cycle or not 


bool checkCycle(int src , vector<int>adj[] , vector<int>&vis , vector<int>&dfsVis){
        vis[src] = 1;
        dfsVis[src] = 1;
        for(int x : adj[src]){
            if(!vis[x]){
                if(checkCycle(x,adj,vis,dfsVis)) return true;     // check if we have done this  
            }
            else if(dfsVis[x]) return true;  // check for cycle 
        }
        dfsVis[src] = 0;           // when we are going back to next node without having another node or cycle
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>dfsVis(V,0);
        for( int i =0;i<V ;i++){
            if(!vis[i]){
                if(checkCycle(i,adj , vis , dfsVis)){
                    return true;
                }
            }
        }
        return false;
    }