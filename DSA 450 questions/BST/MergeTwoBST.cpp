// let suppose we have find out inorder of both tree and store in arrays
vector<int>inorder1;
vector<int>inorder2;

// since these two array are in sorted order merge both array in new array

vector<int>ans // merged array

// now perform the same as we do in balanced BST...
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
