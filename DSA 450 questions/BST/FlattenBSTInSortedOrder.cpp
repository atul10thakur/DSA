


// maintain a prev pointer and do inorder and update prev = root ....
void solve(Node *root , Node *prev){
	if(!root) return  ; 
	
	solve(root->left  , prev);
	prev->left = NULL;
	prev->right = root;
	prev = root;
	solve(root->right , prev);
}


Node *  faltten(Node *root){
	Node *dummyNode = new Node(0);
	Node *prev = dummy
	solve(root , prev);
	prev->left = NULL;
	prev->right = NULL;
	return  dummy->right;
}
