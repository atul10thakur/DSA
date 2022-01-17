#include<bits/stdc++.h>
using namespace std;

int Lomedopartiton(int arr[] , int l  , int h){
	int i = l-1;
	int pivotEle = arr[h];
	for(int j = l ; j<=h-1 ; j++){
		if(arr[j]<pivotEle){
			i++;
			swap(arr[i] , arr[j]);
		}
	}
	swap(arr[i+1] , arr[h])  ;
	return (i);
}

int Hoare(int arr[] , int low , int high){
	int i = low-1;
	 int j = high+1;
	 int pivotEle = arr[low];
	 while(true){
	 	do{
	 		i++;
		 }
		 while(arr[i] <pivotEle) ;
		 do{
		 	j--;
		 }while(arr[j]>pivotEle);
		 if(i>=j){
		 	return j;
		 }
		 swap(arr[i] , arr[j]) ;
	 }
	 
}

void sort(int arr[] , int low , int high){
	
	// using lomedo partition ...
	if(low < high){
		int pivot = Lomedopartiton(arr, low , high);
	
	sort(arr, low , pivot);
    sort(arr , pivot+1 , high);
	}
	// using Hoare's partition ...
//	if(low < high){
//	int pivot = Hoare(arr, low ,high) ;
//	sort(arr, low , pivot);
//    sort(arr , pivot+1 , high);
//	}
		
	
} 

int main(){
	int arr[7] = {10,80,30,90,40,50,70};
	sort(arr, 0 , 6 );
	for(int i = 0; i<=6 ; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
