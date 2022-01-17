#include<bits/stdc++.h>
using namespace std;
struct Node{ 
    int value ; 
    Node *left, *right ;
    Node(int x){
        left = right = NULL;
        value = x;
   }
};



void TopView(Node *root){
    if(root == NULL){
        return ;
    }
    Node *curr = root;
    queue<pair<Node * , int>>q;
    q.push({root , 0});
    map<int , int>m;
    while(q.empty() == false){
        auto ele = q.front();
        int h = ele.second;
        Node *temp = ele.first;
        if(m.find(h) == m.end()){
            m[h] = temp->value;
        }
        q.pop();
        if(temp->left != NULL){
            q.push({temp->left , h-1});
            
        }
        if(temp->right != NULL){
            q.push({temp->right , h+1});
        }
    }
    for(auto x:m){
        cout<<x.second<<" ";
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
    TopView(root);
 return 0; 
}