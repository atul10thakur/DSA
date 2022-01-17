int ans ;
    void solve(Node *root , int k ,int &i ){
        if(!root) return;
        solve(root->left , k , i );
        if(i == k){
            ans = root->data;
            i++;
            return;
        }
        else i++;
        solve(root->right , k , i);
    }
    
    int kthLargest(Node *root, int K)
    {
        int i = 1;
        ans = -1;
        solve(root , K ,i);
        return ans;
    }
