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

int Height(Node *root){
    if(root == NULL){
        return 0;
    }
    return (max(Height(root->left) ,Height(root->right) ) +1);
}

int res = 0;
int Diamter(Node *root){
    if(root == NULL){
        return 0;
    }
    int LH = Height(root->left);
    int RH = Height(root->right);

    return  max(res , LH+RH+1);
}

int main()
{ 
    Node *root=new Node(12);
    root->left=new Node(5);
    root->left->left=new Node(3);
    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->left->left=new Node(16);
    root->right->left->left->left=new Node(15);
    root->right->right=new Node(80);
    cout<<Diamter(root);
 return 0; 
}