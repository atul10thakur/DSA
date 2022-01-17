
int max = 0;
int solve(Node *root){
	if(!root ) return 0;
	int a = solve(root->left);
	int b = solve(root->right);
	ma = max(ma , a + b + root->data);
	return max(a,b+root->data);
	
}
