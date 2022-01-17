

// here just do the same process of check BST but just her point the next pointer to the current node ...
void check(Node *root ,Node * &prev){
        if(!root) return;
        check(root->left , prev);
        if(prev != NULL){
            prev->next = root;
        }
        prev= root;
        check(root->right , prev);
    }

    void populateNext(Node *root)
    {
        Node * prev = NULL;
        check(root , prev);
    }
