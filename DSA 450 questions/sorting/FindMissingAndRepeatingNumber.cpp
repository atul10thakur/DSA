#include<bits/stdc++.h>
using namespace std;

int *MissingAndRepeating(int arr[] , int size){
     int *res;
     int pos = 0;
  for(int i = 1; i < size; i++){
     if(arr[i] == arr[i-1]){
         res[0] = arr[i];
         pos = arr[i];
         res[1] = 
     } 
  }
  for(int i = 0 ; i<pos ; i++){
      if()
  }
  return res;
}

int main()
  {  
      int Arr[] = {1, 3, 3};
      int *res =  MissingAndRepeating(Arr,3);
      cout<<res[0]<<" "<<res[1];
    return 0;
  }