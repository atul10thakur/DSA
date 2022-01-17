// bulding max heap....
 
#include<bits/stdc++.h>
using namespace std;



// we build heap from down to upward order
// we dont have to check heap property for leaf node we just have to check for internal nodes
// index of last internal node - (N/2)-1 
// N is number of nodes ...

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
 
void buildHeap(int arr[] , int size){
	int N = (size/2)-1;       
	for(int i=N ; i>=0 ; i--){        // we are heapify every node in upward direction that is from last internal node to top most root node 
		heapify(arr,i,size);
	}
}


int main(){
	  int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
	  int size = sizeof(arr)/sizeof(arr[0]);
	  buildHeap(arr ,size);
	  for(int i =0 ; i<size ; i++){
	  	cout<<arr[i]<<" ";
	  }
}
