#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n];
 
	for(int i = 0 ; i<n ; i++){
		cin>>arr[i];
	}
 
	int rounds;
	cin>>rounds;
 
	sort(arr, arr+n);
	int preSum[n+1] ;
	preSum[0] = 0;
 
	for(int i =1 ; i<=n ; i++){
		preSum[i] = arr[i-1] + preSum[i-1];
	}
 
	while(rounds--){
		int x ;
		cin>>x;
		int idx = upper_bound(arr ,arr+n ,x) - arr;
		cout<<idx<<" "<<preSum[idx]<<endl;
	}
 
	return 0;
}
