#include<bits/stdc++.h>
using namespace std;

int FirstOccurrence(int arr[] , int high , int low , int x){
  int res = 0;
  int mid = 0;
 while(low <= high){
 	mid = (low+high) / 2; 
 	if(x<arr[mid]){
 		high = mid-1;
	 }
	 else if(x > arr[mid]){
	 	low = mid+1;
	 }
	 else{
	 	res = mid;
	 	high = mid-1;
	 }
 }
 return res;
}
int LastOccurrence(int arr[] , int high , int low , int x){
	int res = 0;
	int mid = 0;
 while(low <= high){
 	mid = (low+high) / 2; 
 	if(x<arr[mid]){
 		high = mid-1;
	 }
	 else if(x > arr[mid]){
	 	low = mid+1;
	 }
	 else{
	 	res = mid;
	 	low = mid+1;
	 }
 }
 return res;
}


int main(){
	int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}  ;
	cout<<FirstOccurrence(arr, 8 , 0 , 5);
	cout<<LastOccurrence(arr, 8 , 0 , 5);
	return 0;
}
