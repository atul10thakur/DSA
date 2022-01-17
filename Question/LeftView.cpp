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

vector<int> LeftView(Node *root){
    vector<int>V;
    Node *curr = root;
    while(curr != NULL){
       if(curr->left == NULL){
          V.push_back(curr->value) ;
          V.push_back(curr->right->value) ;
           curr = curr->right;
            return V;
       }
       else{
           V.push_back(curr->value);   
      curr = curr->left;
       }
    }
   
}
int main()
{ 
    Node *root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->left->left->right=new Node(7);
    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->left->left=new Node(16);
    root->right->right=new Node(80);
  vector<int>v = LeftView(root);
  for(int x : v){
      cout<<x<<" ";
  }
 return 0; 
}