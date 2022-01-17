void Construct(Node *root  , Node* &ptr , int &f ,Node * &head){
       if(!root) return;
       Construct(root->left , ptr , f  , head) ;
       if(f == 0){
           f = 1;
           head = root;
           ptr = root;
       }else{
           ptr->right = root;
           ptr->right->left = ptr;
           ptr = root;
       }
       Construct(root->right , ptr , f , head);
   }
   
    Node * bToDLL(Node *root)
    {
        Node *ptr = NULL;
        Node *head = NULL;
        int f = 0;
        Construct(root , ptr , f , head);
        return head;
    }
