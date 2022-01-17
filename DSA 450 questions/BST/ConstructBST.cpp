Node *ConstructcBST(Node * &root  , int x){
	if(!root) {
		return root = new Node(x); 
	}
	if(root->data > x){
		root->left =  ConstructBST(root-left , x);
	}
	if(root->data < x){
		root->right =  ConstructBST(root-right , x);
	}
	return root;
}

int main(){
	int a[] = {8,5,1,7,10,12};
	Node *root = NULL;
	for(x  : a){
		ConstructBST(root , x);
	}
	int min = INT_MIN;
	int max = INT_MAX;
}
