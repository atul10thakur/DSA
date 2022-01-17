#include<bits/stdc++.h>
using namespace std;

int MaxSumInCosecutiveSequence(int arr[] , int size){
    int curr , res = 0;
   curr = arr[0];
  for(int i = 1 ; i<size ; i++)
   {    curr = max(curr+arr[i] ,arr[i]);
       res = max(res ,curr);
    }
    return res; 
}
int main(){

   int arr[]  = {1,2,3,-2,5 };
   cout<<MaxSumInCosecutiveSequence(arr , 5);
 return 0; 
}