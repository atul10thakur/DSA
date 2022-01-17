#include<bits/stdc++.h>
using namespace std;

// int TrapingRainWater(int arr[], int size){
//    int left[size] , right[size];
//    int i = 1 ,  res = 0;
//    int j= size-2;
//    left[0] = arr[0];
//    right[size-1] = arr[size-1];
//    while( i<size){
//    	if(arr[i] >= left[i-1]){
//    		left[i] = arr[i];
// 	   }
// 	   	else{
// 	   		left[i] = left[i-1];
// 		   }
// 	   i++;
//    }
//    while( j>=0){
//    	if(arr[j] >= right[j+1]){
//    		right[j] = arr[j];
// 	   }
// 	   	else{
// 	   		right[j] = right[j+1];
// 		   }
// 	   j--;
//    }
//      for(int k = 0 ; k<size ; k++){
// 		 res += min(left[k],right[k]) - arr[k]; 
// 	 }
// 	 return res;
// }

int TrapingRainWater2(int arr[] , int size){
	int i = 0 , j = size-1;
	int lh = 0 , rh = 0 , res = 0;
	while(i<=j){
		if(arr[i]<arr[j]){
             if(arr[i]>lh)
				{
					 lh = arr[i];
				}
			 else{
				 res += lh - arr[i];
 			 }
			  i++;
		}
		else{
        if(arr[j] >rh){
			rh = arr[j];
		}
		else{
    		res += rh-arr[j]; 
		}
		j--;
		}
	}
	return res;
}


int main()
{       int arr[6] = {3,0,3,2,0,4};
    //   cout<<  TrapingRainWater(arr, 6);
       cout<<  TrapingRainWater2(arr, 6);
    return 0 ; 
     }
