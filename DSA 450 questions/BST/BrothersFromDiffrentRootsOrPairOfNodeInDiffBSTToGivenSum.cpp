 
 

 // find the value in the 2nd BST 
 
 int c= 0;
  bool find(Node *root , int k){
      if(!root) return false;
      if(root->data  == k) return true;
      bool x = false , y = false;
      if(root->data > k) x = find(root->left , k);
      if(root->data < k) x = find(root->right , k);
      return x or y;
  }
  // inorder of the 1st BST ans then find the value of x-root->data in the 2nd BST 
  void solve(Node *root1 , Node *root2 , int x){
      if(!root1) return ;
      solve(root1->left , root2 , x);
      if(find(root2 ,x-root1->data)) c++;
      solve(root1->right , root2 , x);
  }

    int countPairs(Node* root1, Node* root2, int x)
    { 
     solve(root1 , root2 , x);
     return c;
    }
