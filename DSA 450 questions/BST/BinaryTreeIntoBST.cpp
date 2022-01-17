 void Inorder(Node *root , vector<int> &num){
        if(!root) return ;
        Inorder(root->left, num);
        num.push_back(root->data);
        Inorder(root->right, num);
    }
    void Inorder_ans(Node *root , vector<int> num , int &c){
        if(!root) return ;
        Inorder_ans(root->left , num , c);
        root->data = num[c];
        c++;
        Inorder_ans(root->right, num , c);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>num;
        Inorder(root , num);
        sort(num.begin() , num.end());
        int c = 0;
        Inorder_ans(root , num , c);
        return root;
    }
