
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


void InOrder(Node *root){
	if(!root) return ;
	
	if(root->left) InOrder(root->left) ; 
	cout<<root->data<<" ";
	if(root->right) InOrder(root->right) ;
}


void InOrderRecursive(Node *root){
	Node *curr = root;
	stack<Node *> S;
		
	while(!S.empty() || curr != NULL ){
		if(curr != NULL){
			S.push(curr) ; 
			curr = curr->left;
		}
		else{
			curr = S.top();
			S.pop();
			cout<<curr->data<<" ";
			curr = curr->right;
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
 
    InOrderRecursive(root);
    return 0;
}
