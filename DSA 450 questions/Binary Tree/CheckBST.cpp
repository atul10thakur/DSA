bool f = true;
    int check(Node *root){
        if(!root) return 0;
        int lh = check(root->left);
        int rh = check(root->right);
        if(abs(lh-rh) > 1) f = false;
        return (max(lh,rh) +1);
    }
    bool isBalanced(Node *root)
    {   
        check(root);
        return f;
    }
