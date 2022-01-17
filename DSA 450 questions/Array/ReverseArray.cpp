#include<iostream>
using namespace std ;

void reverse(int arr[] , int size){
int low = 0,  high = size-1;
int temp ;
while(low<=high){
  temp = arr[low];
  arr[low] = arr[high];
  arr[high] = temp;
  low++;
  high--;
}
}

int main(){
     int arr[] = {1, 2, 3};
     reverse(arr , 3);
     for(int i : arr){
         cout<<i<<" ";
     }
    return 0;
}