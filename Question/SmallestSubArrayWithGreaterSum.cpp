#include<bits/stdc++.h>
using namespace std;

int SmallestSubArrayWithGreaterSum(int arr[], int size , int x){
    int i = 0 , j =0;
    int sum = 0;
    int len = size-1;
  while(i<=j && j<size){
      while(sum <= x && j<size){
          sum+=arr[j];
          j++;
      }
      while(sum>x && i<j){
           len = min(len , j-i); 
          sum-=arr[i];
          i++;
      }
  }
  return len;
}

int main()
{   int arr[6] = {1, 4, 45, 6, 0, 19} ;
    int x = 51; 
    cout<<SmallestSubArrayWithGreaterSum(arr, 6 , x) ;
    return 0 ;
     }