#include<bits/stdc++.h>
using namespace std;

bool SubsetOfAnotherArray(int arr[], int brr[] , int m , int n){
    int i = 1 ;
    int j = 1;
    sort(arr, arr+m);
    sort(brr, brr+n);
   while( i < m ){
        if(arr[i] == brr[j]){
           i++;
           j++;
       }
       else {
           i++;
       }
   }
//    cout<<j<<" ";
//    cout<<m<<" ";
   if(j == n ){
       return true;
   }
   return false;
}

int main()
{   int arr1[7] =  {11, 1,5 ,13, 21, 3, 7} ; 
    int arr2[5] = {11, 3, 7, 1, 8}; 
    cout<<SubsetOfAnotherArray(arr1, arr2, 7, 5);
    return 0;
     }