
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

vector<int> topView(Node *root)
    {
        Node *curr = root;
        queue<pair<Node * , int>>Q;
        map<int , int>m;
        vector<int>ans;
        if(!root) return ans;
        Q.push({root , 0});
        while(!Q.empty()){
            Node *curr = Q.front().first;
            int h =   Q.front().second;
             Q.pop();
            m[h] = curr->data;
            if(curr->left) Q.push({curr->left ,h-1});
            if(curr->right) Q.push({curr->right ,h+1});
        }
        
        for(auto x : m) 
        { ans.push_back(x.second) ;
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
