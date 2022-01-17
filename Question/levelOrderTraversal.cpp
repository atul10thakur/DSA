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

void levelOrderTraversal(Node *root){
    Node *curr = root;
    queue<Node *>q;
    q.push(curr);
    while(q.empty() == false){
       Node *temp =  q.front();
       q.pop();
         cout<<temp->value<<" ";
       if(temp->left !=  NULL){
           q.push(temp->left);
       }
       if(temp->right != NULL){
           q.push(temp->right) ;
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

    levelOrderTraversal(root);
 return 0; 
}