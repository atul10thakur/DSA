#include<bits/stdc++.h>
using namespace std;

void KadaneAlogrithm(int arr[], int size){
   int res = 0 ; curr= arr[0];
   for(int i = 1 ; i < size ; i++){
       curr = max(curr , arr[i]+curr);
       res = max(res , curr);
   }
   cout<<res;
} 

int main()
  {  
      int arr[] = {1,2,3,-2,5} ;
      KadaneAlogrithm(arr, 5);
    return 0;
  }