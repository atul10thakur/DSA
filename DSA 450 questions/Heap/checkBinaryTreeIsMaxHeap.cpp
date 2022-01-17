class Solution {
  public:
  
  int Size(Node *root){      // number of nodes
      if(!root){
          return 0;
      }
      return 1+Size(root->left) + Size(root->right);
  }
  
  bool checkheap(Node *root , int size , int idx){
      if(!root){
          return 1;
      }
      if(idx >=size){        // it means index value of left or right is more then  total nodes  that is it voilates
          return 0;         // balanced BT 
      }
      if( (root->left && root->left->data >= root->data) || (root->right && root->right->data >= root->data) ){
          return 0;
      }
      return checkheap(root->left , size , 2*idx+1) && checkheap(root->right , size, 2*idx+2);
  }
  
    bool isHeap(struct Node* root) {
       if(!root){
           return 1;
       }
       int n = Size(root);
       int idx = 0;
       if(checkheap(root, n, idx)){
           return 1;
       }
       return 0;
    }
};
