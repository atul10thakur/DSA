#include <iostream>
using namespace std;


void merge(int arr[] , int low , int mid , int high){
	int i = low;
	int j = mid+1;
	int k = low;
	int temp[50];
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			temp[k++] = arr[i++];
		}else{
			temp[k++] = arr[j++];
		}
	}
	while(i<=mid){
		temp[k++] = arr[i++];
	}
	while(j<=high){
		temp[k++] = arr[j++];
	}
	for(int i  = 0 ; i<high+1 ; i++){
		arr[i] = temp[i];
	}
}

void mergeSort(int arr[] , int low , int high){
	if(low<high){
		int mid = low+(high-low)/2;
		mergeSort(arr, low ,mid);
		mergeSort(arr, mid+1 , high);
		merge(arr,low,mid,high);
	}else{
		return;
	}
}
int main()
{
    int arr[] = {15 , 6 ,10,2,7,13,5,2,80, 55, 12 };
    mergeSort(arr, 0, 10);
    for(int i= 0 ; i<11 ; i++){
        cout<<arr[i]<<" ";
    }
    
}
