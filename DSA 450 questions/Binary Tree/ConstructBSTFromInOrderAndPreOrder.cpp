 unordered_map<int,int>m;
    int idx = 0;
    Node *construct(int in[] , int pre[] , int low ,int high ){
        if(low > high) return NULL;
        Node *res = new Node(pre[idx++]);
        if(low == high) return res;
        int mid = m[res->data];
        res->left = construct(in , pre , low , mid-1);
        res->right = construct(in , pre , mid+1 , high);
        return res;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {   idx = 0;
        for(int i = 0 ; i<n ; i++) m[in[i]] = i;
        Node * head = construct(in ,pre,  0 , n-1);
        return head;
    }
