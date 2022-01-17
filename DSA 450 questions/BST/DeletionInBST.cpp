TreeNode * successor(TreeNode *root){
    TreeNode *curr = root->right;
    while(curr->left) curr=curr->left;
        return curr;
    
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val < key) root->right = deleteNode(root->right , key);
        else if(root->val > key) root->left =  deleteNode(root->left , key);
        else{
        	
        	// if left exist  not point to root->right  
        	
             if(!root->left){
            TreeNode *temp = root->right;
             delete(root);
                return temp;
            }
            
            // if right not exist point to root->left
            else if(!root->right){
            TreeNode *temp = root->left;
                delete(root);
                return temp;
            }
            
            // if both right and left node exist  then just call sucessor and swap the succsessor node with root node
            // do the deletion again....
            else{
                TreeNode *curr = successor(root);
                swap(root->val , curr->val);
                root->right = deleteNode(root->right , key);
            }
        }
        return root;
    }
