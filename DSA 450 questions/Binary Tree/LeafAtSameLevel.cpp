 int ans = 1;
    void solve(Node *root , int h , int &ma){
        if(!root) return;
        if (ans == 0) return;
        if(!root->left && !root->right){
            if(ma == -1){
                ma = h;
            }
            if(ma != h){
                ans = 0;
            }
            return;
        }
        solve(root->left , h+1 , ma);
        solve(root->right , h+1 , ma);
        
    }
    bool check(Node *root)
    {
        int h= 1 , ma = -1;
        solve(root , h , ma);
        return ans;
    }
