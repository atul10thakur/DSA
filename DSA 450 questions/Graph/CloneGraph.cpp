void dfs(Node *root , Node *copy , vector<Node*>&vis){
        vis[root->val] = copy;
        for(auto x : root->neighbors){
            if(vis[x->val] == NULL){
                Node *newNode = new Node(x->val);
                (copy->neighbors).push_back(newNode);
                dfs(x,newNode,vis);
            }else{
               (copy->neighbors).push_back(vis[x->val]); 
            }
        }
        
    }
    
    Node* cloneGraph(Node* node) {
       if(node == NULL) return NULL;
        vector<Node *>vis(1000,NULL);
        Node *copy = new Node(node->val);
        dfs(node ,copy,vis);
        return copy;
    }