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

int height(Node *root){
 if(root == NULL){
     return 0;
 }else
    return  max(height(root->left) , height(root->right) +1);
}

bool IsBalanced(Node *root){
    if(root == NULL){
        return true;
    }
    int LH = height(root->left);
    int RH = height(root->right);
  return (  abs(LH - RH ) <= 1 && IsBalanced(root->left) && IsBalanced(root->right) );
}
bool IsBalance(Node *root){

    if(root == NULL){
        return 0;
    }
    int lh = IsBalanced(root->left);
    if(lh == -1){
        return -1;
    }
    int rh = IsBalanced(root->right);
    if(rh == -1){
        return -1;
    }
    if(abs(lh - rh ) > 1){
        return -1;
    }
    else{
        return max(lh, rh)+1;
    }
}

int main() {
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right->right = new Node(2);
    root->right = new Node(5);
    if(IsBalance(root)){
        cout<<"balanced";
    }else{
        cout<<"not balanced";
    }
return 0;
}