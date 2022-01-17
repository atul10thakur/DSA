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
bool search(Node *root, int ele){
    if(root == NULL){
        return false;
    }
    if(root->value == ele){
        return true;
    }
    if(root->value > ele){
      search(root->left , ele);
    }
    if(root->value < ele){
      search(root->right , ele);
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
   
    cout<<search(root , 18);

 return 0; 
}