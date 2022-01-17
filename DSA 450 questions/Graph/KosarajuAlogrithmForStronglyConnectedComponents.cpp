vector<int>order;
	//Function to find number of strongly connected components in the graph.
	
	void dfs(int src , vector<int>g[] , vector<bool>&vis){
	    vis[src] = true;
	    for(auto x : g[src]){
	        if(!vis[x]){
	            dfs(x,g,vis);
	        }
	    }
	    order.push_back(src);
	}
	void rdfs(int src , vector<int>g[] , vector<bool>&rvis){
	    rvis[src] = true;
	    for(auto x : g[src]){
	        if(!rvis[x]){
	            rdfs(x,g,rvis);
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {   order.clear();
        vector<int>rev[V];
        for(int i=0 ; i<V ; i++){
            for(auto x : adj[i]){
                rev[x].push_back(i);
            }
        }
        vector<bool>vis(V,false);
        for(int i =0 ; i<V ; i++){
            if(!vis[i]){
                dfs(i,adj,vis);
            }
        }
        vector<bool>rvis(V,false);
        int c= 0;
        for(int i=V-1 ; i>=0 ; i--){
            if(!rvis[order[i]]){
                rdfs(order[i],rev,rvis);
                c++;
            }
        }
        return c;
    }