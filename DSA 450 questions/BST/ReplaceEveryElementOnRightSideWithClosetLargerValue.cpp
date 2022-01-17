Node *insert(Node *root , Node *succ , int x)
{
	if(!root) return NULL;
	
	if(root->data > x){
		succ = root;   // only if its on the left side then its have successor and update
		root->left = insert(root->left , succ , x);
	} 
	else if(root->data < x){
		root->right = insert(root->right , succ , x);
	}
	else return root;
}


void replace( int arr[] , int n){
	Node *root = NULL;
	for(int i =0 ; i< n ; i++){
		Node succ = NULL;
		insert(root , succ , arr[i]);
		if(succ){
		arr[i] =succ->data;
	}
	else{
		arr[i] = -1;
	}
	}
	
}
