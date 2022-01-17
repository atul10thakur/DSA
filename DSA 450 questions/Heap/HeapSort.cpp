#include<bits/stdc++.h>
using namespace std;

 void heapify(int arr[] , int i , int size){
 	int leftNode = 2*i+1;
 	int rightNode = 2*i+2;
 	int largest = i;
 	if(leftNode < size && arr[leftNode] > arr[largest]){
 		largest = leftNode;
	 }
	 if(rightNode < size && arr[rightNode] > arr[largest]){
	 	largest = rightNode;
	 }
	 if(largest != i){
	 	swap(arr[i] , arr[largest]);
	 	heapify(arr , largest , size);
	 }
 }
 
void heapSort(int arr[], int size){
	 // will be using from size-1 to 1 since 0th index element will already come its original position 
	for(int i =size-1  ;i>0 ; i--)
	{
		 swap(arr[0] , arr[i]);
		 heapify(arr , 0 , i);
	}
	
}

int main(){
	 int arr[]=  { 12, 11, 13, 5, 6, 7  };
	   int size = sizeof(arr)/sizeof(arr[0]);
	 // first build heap min or max if its nota heap then use heapsort , in this case we have heap so we dont need to create heap..
	 heapSort(arr ,size);
	 for(int i =0 ; i<size ; i++){
	  	cout<<arr[i]<<" ";
	  } 
	  return 0;
}
