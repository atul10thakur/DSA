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

void BottomView(Node *root){
    Node *curr = root;
    map<int, int>m;
    queue<pair<Node *, int>>q;
    q.push({root , 0});
    while(q.empty() == false){
      auto x = q.front();
      Node *temp = x.first;
      int height = x.second;
      if(m.find(height) == m.end()){
        m[height] = temp->value;
      }
      if(temp->left != NULL){
          q.push({temp->left ,height-1});
      }
      if(temp->right != NULL){
          q.push({temp->right ,height+1});
      }
    }
   for(auto x : m){
       cout<<x.first<<" ";
   }
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
    BottomView(root);
 return 0; 
}
