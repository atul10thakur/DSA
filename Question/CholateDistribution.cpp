#include<bits/stdc++.h>
using namespace std;

int ChoclateDistribution(int arr[] , int size , int N){
  int max= INT_MAX;
   for(int i = 0 ; i<=size-N ; i++){
  
   	    if(arr[N-1+i] - arr[i] < max){
   	    	max = arr[N-1+i] - arr[i];
		   }
   }
    return max ;
}

int main()
{   int arr[8] = {3, 4, 1, 9, 56, 7, 9, 12} ;
    sort(arr, arr+8);
   cout<< ChoclateDistribution(arr, 8 , 5);
    return 0 ;
     }
