vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>vis(V,0);      // check  node is visited or not 
        queue<int>q;        // queue for traversal 
        vis[0] = 1;
        q.push(0);       // push first node
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);         // pushing in answer
            for(int i : adj[x]){         // other ahjcent nodes ....
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);        // pushing in queue
                }
            }
        }return ans;
    }