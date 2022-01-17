
// here first we construct  new vector array using given array by using formula
// for inorder = 2*idex + 1
// for preorder = 2*idx + 2
// then just count the minimumswaps to sort array and thats is the ans for
// minimum swaps to make BST ..... 


void inorder(int a[], vector<int> &v,
                        int n, int index)
{
    if(index >= n)
        return;
    inorder(a, v, n, 2 * index + 1);
    v.push_back(a[index]);
    inorder(a, v, n, 2 * index + 2);
}


int minSwaps(std::vector<int> &v) 
{
    std::vector<pair<int,int> > V;
    int ans = 0;
    for(int i = 0; i < v.size(); i++) v.push_back({v[i] , i});
    
    sort(v.begin()  , v.end());
	int count = 0;
	for(int i = 0 ; i<v.size() ; i++){
		if(v[i].second == i) continue ;
		else{
			count++;
			swap((v[i] , (v[v[i].second]));
		}
	} 
   
    return ans;
}

