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


void ZiZag(Node *root){
    if(root == NULL){
        return;
    }
    Node *Curr = root;
    stack<Node *>S;
    queue<Node *>Q;
    Q.push(Curr);
    bool reverse = false;
    while(Q.empty() == false){
     int width = Q.size();
     for(int i = 0 ; i < width ; i++){
         Node *crr = Q.front();
         Q.pop();
         if(reverse){
             S.push(crr);
         }
         else{
             cout<<crr->value<<" ";
         }
             if(crr->left != NULL){
                 Q.push(crr->left);
             }
             if(crr->right != NULL){
                 Q.push(crr->right);
         }
     }
     if(reverse){
          while(S.empty() ==false){
              cout<<S.top()->value<<" ";
              S.pop();
          }
     }
     reverse = !reverse;
     cout<<endl;
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
    ZiZag(root);
 return 0; 
}