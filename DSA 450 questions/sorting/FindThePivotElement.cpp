#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[] , int size){
	int low  = 0 ;
	int high = size -1 ;
	int mid = 0 ;
	while(low <= high){
		mid = (low + high) / 2 ;
		if(arr[mid] > arr[mid-1] && arr[mid]>arr[mid+1]){
			return arr[mid];
		}
		if(arr[mid] > arr[low] ){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
}

int main(){
	int arr[] = {4,5,6,7,8,1,2,3};
	cout<<pivot(arr, 8);
	return 0;
}
