    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	queue<Node *>q;
    	if(!root) return ans;
    	q.push(root);
    	bool f = false;
    	while(!q.empty()){
    	    vector<int>v;
    	    int size = q.size();
    	    while(size--){
    	        Node * curr = q.front();
    	        q.pop();
    	        v.push_back(curr->data);
    	        if(curr->left) q.push(curr->left);
    	        if(curr->right) q.push(curr->right);
    	    }
    	     if(f) reverse(v.begin() , v.end());
    	     for(auto x : v) ans.push_back(x);
    	     f = !f;
    	}
    	return ans;
    }
