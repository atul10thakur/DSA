#include<bits/stdc++.h>
using namespace std;

int MinimumSwap(int arr[] , int size , int K){
	int max=0;
	int i =0;
	int res = INT_MAX;
   while(i < K){
   	  if(arr[i] > K){
   	  	max++;
		 }
		 i++;
   }
    i = 0 ;
	int j = K;
   while(j<size){
   	res = min(res, max);
   	if(arr[j] > K ){
   		max++;
	   }
	   j++;
	 if (arr[i] > K){
	 	max--;
	 	i++;
	 }
   }
   return res;
}

int main() 
{   int arr[5] = {6,1,5,6,3};
    int K = 3 , size = 7;
    cout<< MinimumSwap(arr, size , K);
    
    return 0;
     }
