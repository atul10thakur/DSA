#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
    Node(int k){
        value=k;
        left=right=NULL;
}
};

 void  leftTraversal(Node *root,vector<int>&ans){
     if(root == NULL) 
        return ;
     if(root->left != NULL){
         ans.push_back(root->value);
         leftTraversal(root->left, ans);
     }
    else if(root->right != NULL){
         ans.push_back(root->right->value);
         leftTraversal(root->right, ans);
     }
 }
 void rightTraversal(Node *root , vector<int>&ans){
   if(root == NULL) 
        return ;
     if(root->left != NULL){
         leftTraversal(root->right, ans);
         ans.push_back(root->right->value);
     }
    else if(root->right != NULL){
         leftTraversal(root->left, ans);
         ans.push_back(root->left->value);
     }
 }
 void  leafNodeTraversal(Node *root , vector<int>&ans){
      if(root == NULL)
             return ;
      leafNodeTraversal(root->left,ans);
      if(root->right == NULL && root->left == NULL) ans.push_back(root->value);
      leafNodeTraversal(root->right,ans);
 }

void BoundaryTravesal(Node *root){
    vector<int>ans;
    ans.push_back(root->value);
    leftTraversal(root->left , ans);
    leafNodeTraversal(root , ans);
    rightTraversal(root->right , ans);
    for(int i = 0; i <ans.size();  i++){
        cout<<ans[i]<<" ";
    }
}
int main() {
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    BoundaryTravesal(root);
return 0;
}