

void Sum(int arr[] , int size){
	sort(arr , arr+size);
	int sum1 = 0;
	int sum2 = 0;
	int j = size-1;
	int c = 0;
	for(int i =0 ; i<size  ;  i++){
		sum1+=arr[i];
	}
	while(j=>0){
	sum2 +=arr[j];
	sum1-=arr[j];
	j--;
	count++;
	if(sum2 >sum1{
		break;
	}
	cout<<"Minimum Number of element whose sum is larger then the remainig elements is "<< c;	
}
