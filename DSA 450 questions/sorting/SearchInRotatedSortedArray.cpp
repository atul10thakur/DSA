#include<bits/stdc++.h>
using namespace std;

int SearchInRotatedSortedArray(int arr[] , int size , int target){
	int low= 0, high = size-1;
	int mid = 0;
	while(low <=high){
		mid = (low + high)/2 ;
		if(arr[mid] == target){
			return mid;
		}
		else if(arr[mid] >= arr[low]){
			if(arr[mid] >= target && arr[low]<=target){
				high = mid -1 ;
			}
			else{
				low = mid+1;
			}
		}
		else{
			if(arr[mid] <= target && arr[high] >= target){
				low = mid+1;
			}
			else{
				high = mid - 1;
			}
			
		}
	} 
	return -1;
	
}

int main(){
	
	int arr[] = {4,5,6,7,8,0,1,2};
cout<<SearchInRotatedSortedArray(arr, 8 , 0);
	return 0;
}
