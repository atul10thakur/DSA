

int MinimumDiffrenceSum(int arr[] , int size){
	int i =0 ;
	int k =0 ;
	int j = size-1;
	int counter = 0;
	sort(arr, arr+n);
	vector<int>v;
	while( k < size){
		if(counter &1){
			v.push_back(arr[j]);
			j--;
		}
		else{
		v.push_back(arr[i]);
		i++;	
		}
		counter++;
		k++;
	}
	for(int i = 0 ; i<size ; i++){
		sum+= abs( v[i-1] - v[i] ); 
	}
}
