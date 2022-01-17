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

void RightView(Node *root , int currlevel , int &maxLevel)
{
    if(root == NULL ){
        return ;
    }
    if(maxLevel < currlevel ){
        cout<<root->value<<" ";
        maxLevel = currlevel;
    }
    RightView(root->right, currlevel+1, maxLevel);
    RightView(root->left, currlevel+1, maxLevel);
}

int main()
{ 
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->right=new Node(5);
    root->left->right->right=new Node(8);
    int maxLevel = 0;
    RightView(root , 1  , maxLevel);
 return 0; 
}