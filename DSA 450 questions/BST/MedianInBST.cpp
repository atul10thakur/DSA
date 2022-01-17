
// count no. of nodes even or odd
void count_nodes(Node *root , int &c){
    if(!root) return;
    count_nodes(root->left , c);
    c++;
    count_nodes(root->right , c);
}


// find the median in curr = root and previous node in prev
void solve(Node *root ,Node * &prev ,Node * &curr , int &c , int k , int &f){
    if(!root) return;
    solve(root->left ,  prev , curr , c , k , f);
    if(prev == NULL){
        prev = root;
        c++;
    }
    else if(c == k){
        c++;
        
        f = 1;
        curr = root;
        return ;
    }else if(f == 0){
         prev = root;
          c++;
       
    }
    solve( root->right , prev , curr , c , k , f) ;
}

float findMedian(struct Node *root)
{
      int n =0 ;
      count_nodes(root , n);
      Node *curr = NULL;
      Node *prev = NULL;
      int c = 1;
      int x = (n/2)+ 1 ;
      int f= 0;
      solve(root , prev , curr , c , x , f);  // find for odd nodes (n/2) + 1
      
      if(n&1){
          float ans = (curr->data) * 1.0;  // if nodes are odd(n/2)+1
          return ans;
      }
      else{
          float ans = ((curr->data + prev->data)*1.0 ) / (2* 1.0); // just add prev->data(n/2) and curr(n/2)+1 in odd nodes and divide
          return ans;
      }
      
