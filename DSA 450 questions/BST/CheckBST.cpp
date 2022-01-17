void check(Node *root , Node * &prev , int &f){
          if(!root) return;
        check(root->left , prev , f);
        if(prev != NULL && prev->data >= root->data){
            f = 0;
            return ;
        }
            prev = root;
        check(root->right , prev , f);
    }
    
    bool isBST(Node* root) 
    {
        int f = 1;
        Node *prev = NULL;
        check(root , prev , f);
        return f;
    }
