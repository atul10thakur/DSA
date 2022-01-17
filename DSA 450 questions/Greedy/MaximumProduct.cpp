

void Product(int arr[] , int size){
	int zero_count = 0 ;
	int negative_count = 0; 
	int product = 1;
	
	int max_negative = INT_MIN;
	
	for(int i = 0 ; i<size ; i++){
		if(arr[i] ==0 ){
			zero_count++;
			continue;
		}
		if(arr[i] < 0){
			negative_count++;
			int max_negative = max(max_neagative , arr[i]) ;
		}
		product = product * arr[i] ;
	}
	if(zero_count == size){
		cout<<"product is"<<"0";
	}
	else if( negative_count == 1 && negative_count + zero_count == size){
			cout<<"product is"<<"0";
			
	}
	 if(negative_count & 1)
	 	product = product/max_negative;
	 }
	 cout<<"product is "<<product;
	 
}
