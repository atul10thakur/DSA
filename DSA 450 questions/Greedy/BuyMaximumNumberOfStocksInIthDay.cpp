
// store stocks acc. to day and price in vector and sort acc. to prcie..
// now just chekc can we buy or not ... 

int stockBuy(int arr[] , int size , int money){
	vector<pair<int , int>>v;
	for(int i = 0 ; i<size ; i++){
		v.push_back({arr[i] , i+1});
	}
	sort(v.begin() , v.end());
	int stocks = 0;
	for(int i  = 0 ; i<size ; i++){
		int price = v[i].first;
		int Nstocks = v[i].second;
		if(price*Nstocks =< money){
			stocks+=Nstocks;
			money -= (price*Nstocks);
		}
		else{
			stocks+= money/price;
			money -= price * (money/price)
		}
	}
	return  stocks
}
