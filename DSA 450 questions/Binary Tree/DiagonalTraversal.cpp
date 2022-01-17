
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


void DiagonalTraversal(Node *root){
	if(!root) return ;
	queue<Node *>q;
	q.push(root);
while(!q.empty()){
	Node *curr = q.front;
	q.pop();
	while(curr){
		if(curr->left) q.push(curr->left);
	cout<<curr->data;
	curr =curr->right;
	}
}
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
    PreOrder(root);
    PreOrderRecursive(root);
}
