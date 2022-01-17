#include<bits/stdc++.h>
using namespace std;


int KthSum(int arr[] , int size, int K){
	int sum[size+1] ;
	sum[0] = 0;
	sum[1]  = arr[1];
	for(int i = 2 ; i<=size; i++){
		sum[i] = sum[i-1] + arr[i-1]; 
	}
	
	priority_queue<int>pq;   // maintaing a min queue of K size ; 
	
	for(int i=1; i<=size ; i++){
		for(int j=i ; j<=size ; j++){
			int x = sum[j] - sum[i-1];     // computing all the sum ...
			if(pq.size() < K){    // size of K 
				pq.push(x);
			}else{
				pq.pop();
				pq.push(x);
			}
		}
	}
	return pq.top();
}


int main(){
	int arr[] = {10, -10, 20, -40};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k= 6;
	cout<<KthSum(arr,size , k);
	return 0;
}
