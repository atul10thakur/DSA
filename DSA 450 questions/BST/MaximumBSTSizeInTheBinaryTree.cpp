



// storing 4 values in vector {BTS or not , height , minRange , maxRange}

vector<int> solve(Node *root){
        if(!root) return { 1 , 0 ,  INT_MAX ,INT_MIN};  // just reverse max and min if root is null...
        if(!root->left && !root->right) return {1 , 1,root->data , root->data};    // if leaf node then max = min = root->data
        vector<int>l = solve(root->left);
        vector<int>r = solve(root->right);
        if(l[0] && r[0]){
            if(root->data > l[3] && root->data < r[2]){      // check max from left tree < root and min from right tree > root  
                int x = l[2];
                int y = r[3];
                if(x == INT_MAX) x = root->data;
                if(y == INT_MIN) y = root->data;
                return { 1 , l[1]+r[1] +1  , x , y};
            }
        }
        return { 0 , max(l[1] , r[1]) , 0 , 0};       // if there is no BST ... 
    }
    
    int largestBst(Node *root)
    {
    	vector<int>ans = solve(root);
    	return ans[1];
    }
