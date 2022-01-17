vector<int> reverseLevelOrder(Node *root)
{
    Node *cur = root;
    queue<Node *>q;
    vector<int>ans;
    
    if(!root) return ans;
    q.push(cur);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->right != NULL){
              q.push(temp->right);
          }
          if(temp->left != NULL){
              q.push(temp->left);
          }
    }
   reverse(ans.begin() , ans.end());
   return ans;
}
