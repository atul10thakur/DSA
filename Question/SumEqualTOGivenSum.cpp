#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[] , int size , int sum){
    sort(arr, arr+size);
    int pair = 0;
   int left = 0  , right = size- 1;
   while(left <= right){
      if(arr[left] + arr[right] > sum){
          right--;
      }else if(arr[left] + arr[right] < sum){
          left++;
      }
      else{
          pair++;
      }
   }
   cout<<pair;
}

int main(){
     int arr[5] = { 1,5,7,1};
     Sum(arr, 4 , 6);
    return 0 ;
}