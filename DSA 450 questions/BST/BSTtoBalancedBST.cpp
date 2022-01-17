
// let suppose we have find out inorder onf tree and store in array

vector<int>inorder;
int low = 0;
int high = size-1;
Node *solve( int low , int high){
	if(low > high){
		return NULL;
	}
	int mid = (low + high)/2;
	Node *root = inorder[mid];
	
	root->left = solve(low , mid);
	root->right = solve(mid+1 , high);
	
	return root;
}
