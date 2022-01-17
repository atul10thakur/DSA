Node * LCA(Node *root , int a , int b){
        if(!root) return NULL;
        if(root->data == a || root->data == b) return root;
        Node *l = LCA(root->left , a , b);
        Node*r = LCA(root->right , a , b);
        if(l and r) return root;
        if(l) return l;
        else return  r; 
    }
    
    int solve(Node *root , int a){
        if (!root) return 0;
        if(root->data == a) return 1;
        int l = solve(root->left , a);
        int r = solve(root->right , a);
        if(!l && !r) return 0;
        else return (l+r+1);
    }
    
    int findDist(Node* root, int a, int b) {
        Node *lca = LCA(root , a , b);
        int left = solve(lca ,a);
        int right = solve(lca , b);
        return left+ right-2;
    }
