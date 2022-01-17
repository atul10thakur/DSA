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

vector<int> DigonalTraversal(Node *root){
    vector<int>ans;
    queue<Node *>Q;
    Q.push(root);
    while(Q.empty() == false){
        Node *curr = Q.front();
        Q.pop();
        while(curr != NULL){
             if(curr->left){
            Q.push(curr->left);
        }
        ans.push_back(curr->value);
        curr = curr->right;
        }
    }
    return ans;
}

int main() {
  Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3); 
        root->left->left = new Node(9);
        root->left->right = new Node(6);
        root->right->left = new Node(4);
        root->right->right = new Node(5);
        root->right->left->right = new Node(7);
        root->right->left->left = new Node(12);
        root->left->right->left = new Node(11);
        root->left->left->right = new Node(10);
   vector<int>ans =  DigonalTraversal(root);
   for(int i = 0 ; i<ans.size() ; i++){
       cout<<ans[i]<<" ";
   }
return 0;
}