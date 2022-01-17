

int WineTrading( int arr[] , int size){
	
	// for  buy ,sell and its index which will work as its distance for total work ...  
	
	vector<pair<int,int>>buy;  
	vector<pair<int , int>>sell;
	int ans = 0;
	
	for(int i=0 ; i,i<size ; i++){
	if(arr[i] < 0){
		sell.push_back({arr[i] , i});
	}	
	else buy.push_back({arr[i] , i});
	}
	int ans = 0;
	int i = 0;
	int j = 0;
	while(i<buy.size() && j<sell.size()){
		int dif = min(buy[i].first , -sell[i].first); // check the buy and sell diffrence 
		 buy[i].first -= dif;               // update buy
		sell[i].first += dif;               // update sell
		int x = abs(buy[i].second - sell[i].second);    
	   ans = (x * dif);             // how much work required for distance and wines ..
		if(buy[i] ==0) i++;         // check if all wines are bought and go on next
		if(sell[i] == 0) j++;      // check all wines are sold or not .....
	}
	return ans;
}
