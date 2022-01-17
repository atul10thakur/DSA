
// for successor just do first left and the extrem right node.
Node *predecessor(Node *root){
    Node *curr = root->left;
    while(curr->right) curr= curr->right;
    return curr;
}


// for successor just do first right and the extrem left node.
Node * successor(Node *root){
    Node *curr = root->right;
    while(curr->left) curr=curr->left;
    return curr;
}


void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) return;
    if(root->key == key){
        if(root->left) pre = predecessor(root);
        if(root->right) suc = successor(root);
        return;
    }
    if(root->key < key){
        pre = root;
        findPreSuc(root->right , pre , suc , key);
    }
    if(root->key > key){
        suc = root;
        findPreSuc(root->left , pre , suc , key);
    }
