string duplicate(Node *root){
        string S = "";
       if(!root ) return "$";
    if(!root->left && !root->right){
        S= to_string(root->data);
        return S;
    }
    S += to_string(root->data);
    S +=  duplicate(root->left);
    S += duplicate(root->right);
    m[S]++;
    return S;
    } 
    
    int dupSub(Node *root) {
         duplicate(root);
         for(auto x : m){
             if(x.second >= 2) return true;
         }
         return false;
    }
