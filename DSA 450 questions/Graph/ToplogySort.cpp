	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>in(V,0);
	    vector<int>ans;
	    queue<int>q;
	    
	    for(int i =0 ; i<V ;i++){
	        for(auto x : adj[i]){
	            in[x]++;
	        }
	    }
	    for(int i = 0 ; i<V ; i++){
	       if(in[i] ==0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto x : adj[node]){
	            in[x]--;
	            if(in[x] ==0 ) q.push(x);
	        }
	    }
	   return ans; 
	}