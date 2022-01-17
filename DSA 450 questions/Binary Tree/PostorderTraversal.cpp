
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


void PostOrder(Node *root){

if(root == NULL) return ;

Node *curr = root;
PostOrder(curr->left);
PostOrder(curr->right);
cout<<curr->data<<" ";

}


void PreOrderRecursive(Node *root){

		stack<Node *>S;
		stack<int>ans;
		S.push(root);
		while(!S.empty()){
			Node *curr = S.top();
			S.pop();
			ans.push(curr->data);
			if(curr->left){
				S.push(curr->left);
			}
			if(curr->right){
				S.push(curr->right);
			}
		}
		while(!ans.empty()){
			cout<<ans.top()<<" ";
			ans.pop();
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
//    PostOrder(root);
PreOrderRecursive(root);
    return 0;
}
