 vector<int> levelOrder(Node* node)
    {
        vector<int>ans;
        queue<Node *>q  ;
        
        if(!node){
            return ans;
        }
      Node *cur = node ;
      q.push(cur);
      while(!q.empty()){
          Node *temp = q.front();
          q.pop();
          ans.push_back(temp->data);
          if(temp->left != NULL){
              q.push(temp->left);
          }
           if(temp->right != NULL){
              q.push(temp->right);
          }
      }
      return ans;
    }
