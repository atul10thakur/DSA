#include<bits/stdc++.h>
using namespace std;


bool TripletSum(int arr[], int size, int sum){
   int k=size-1;
    sort(arr, arr+size);
   for(int i = 0 ; i< size -2 ; i++){
      int r = i+1;
      k = size-1;
   while( r < k){
       if(arr[i] + arr[r]+ arr[size] > sum){
           k--;
       }
       else if(arr[i] + arr[r]+ arr[size] < sum){
           r++;
       }
       else{
           return true;
       }
   }
   }
   return false;
}
int main()
{  
    int arr[6] = {1,4,45,6,10,8};
    TripletSum(arr, 6, 13);
    return 0;
     }