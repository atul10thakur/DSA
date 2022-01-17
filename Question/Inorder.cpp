#include<bits/stdc++.h>
using namespace std;
struct Node{ 
    int value ; 
    Node *left, *right;
    Node(int x){
        left = right = NULL;
        value = x;
   }
};

void Inorder(Node *root){
if(root == NULL){
    return ;
}
  Inorder(root->left);
  cout<<root->value<<" ";
  Inorder(root->right);
}
void InorderIterative(Node *root){
    Node *curr =root;
     stack<Node *>S;
 while(curr != NULL || S.empty() == false){
      if(curr != NULL){
          S.push(curr);
        curr= curr->left;
      }
      else{
           curr = S.top(); 
       S.pop();
       cout<<curr->value<<" ";
      curr = curr->right;
      }
 }
}

int main()
{ 
    Node *root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->left->left=new Node(16);
    root->right->right=new Node(80);
    // Inorder(root); 
    InorderIterative(root); 
 return 0; 
}