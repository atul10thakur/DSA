

// first method  -----------
//  store all the nodes is map 
// stores all the leaf nodes in map 
// then check  for every leaf node map  whether {node-1,node +1} present in the node map if presenst then that node is dead end 


// in this second method find the range between the new nodes can be inserted  (min , max) if min == max then its dead end   
bool solve(Node *root , int min , int max){
    if(!root) return false;
    if(min == max) return true;
    return solve(root->left , min,root->data-1) or solve(root->right , root->data+1 ,max );
}

bool isDeadEnd(Node *root)
{
  return solve(root , 1 ,INT_MAX);
}
