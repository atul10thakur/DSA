
#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};


vector<int> rightView(Node *root)
    {
       queue<Node *>Q;
       vector<int>ans;
       if(!root) return ans;
      Q.push(root);
      while(!Q.empty()){
          int size = Q.size();
          ans.push_back(Q.front()->data);
          while(size--){
              Node *curr = Q.front();
              Q.pop();
              if(curr->right) Q.push(curr->right);
              if(curr->left) Q.push(curr->left);
          }
      }
      return ans;
    }


int main(){
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
}
