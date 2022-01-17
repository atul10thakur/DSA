struct Node
{
    struct Node *left, *right;
    int data;
};


bool anagram(Node *root1 , Node *root2){
	if(root1 == NULL && root2 == NULL){
		return true;
	}
	if(root1 == NULL || root2 == NULL){
		return false;
	}
	
	queue<Node *>q1,q2;     // for level order traversal...
	vector<int>v1,v2;       // for checking anagram 
	
	q1.push(root1);
	q2.push(root2);
	
	while(true){
		int size1 = q1.size();
		int size2 = q2.size();
		
		if(size1 != size2){   // if any two level of tree dont have same number of nodes 
			return false;
		}
		if(size1==0 || size2 ==0){       // this means we have travel all levels of the tree
			break;
		}
		while(size1 >0 || size2 >0){
			Node *cur1 = q1.front();     // level order ..
			q.pop();
			if(cur1->left != NULL){
				q1.push(cur1->left);
			}
			if(cur1->right != NULL){
				q1.push(cur1->right);
			}
			size1--;   // decrementing size 
			
			Node *cur2 = q2.front();
			q.pop();
			if(cur2->left != NULL){
				q2.push(cur2->left);
			}
			if(cur2->right != NULL){
				q2.push(cur2->right);
			}
			size2--;
			
			v1.push_back(cur1->data);         // pushing root data in vector 
            v2.push_back(cur2->data);
		}
		sort(v1.begin() , v1.end());     // this will check every level anagram is present of not in two tree 
		sort(v2.begin() , v2.end())'
		if(v1 != v2){
			return false;
		}
	}
	return true;
}






