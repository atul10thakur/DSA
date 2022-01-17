#include<iostream>
using namespace std ;

void MoveNeagtive(int arr[] , int size )
{
     int j = 0;
  for(int i = 1 ;  i<size ; i++){
     
 if(arr[i-1] > 0 && arr[i] < 0)
 {
 	swap(arr[i],arr[j]);
 	j++;
 }
   } 
  }

int main(){
    int arr[] = {1, 12, -3, 4, 5, -6, -7, 8, -9 };
    MoveNeagtive(arr, 9);
    for(int i = 0 ; i<9 ; i++){
    	cout<<arr[i]<<" ";
	}
    return 0;
} 
