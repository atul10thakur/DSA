#include<bits/stdc++.h>
using namespace std;


int solve(int arr[] , int size , int totalLenght , int minLength , int mid){
	int sum = 0 ;
	for(int i = 0 ; i < size ; i++){
		if(arr[i] > mid) {
			sum += arr[i] - mid;
		}
	}
	if(sum >= minLength) return true;
	else return false;
}

int minimumCuts(int arr[] , int size , int totalLength, int minLength){
	int low = 0 ;
	int high = totalLength;
	int ans = 0 ; 
	while(low <= high){
		int mid = (low+high) / 2;
		if(solve(arr, size , totalLength , minLength , mid)){
	     ans= mid;
	     low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return ans;
}

int main(){
	int arr[] = { 20 , 15 ,10 ,17} ; 
	cout<<minimumCuts(arr , 4 , 20 , 7);
	return 0;
}
