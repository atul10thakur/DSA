#include<bits/stdc++.h>
using namespace std ;

int subArraySum(int arr[] ,int size){
  int res = 0;
  int curr; 
   curr = arr[0];
  for(int i = 1 ; i<size ; i++){
   curr = max(arr[i]+curr , arr[i]);
   res = max(res , curr);
  }
  return res;
}

int main(){
  int  arr[] = {1,-1,5,-2,3};
  cout<<subArraySum(arr,5);
}