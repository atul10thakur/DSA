#include<bits/stdc++.h>
using namespace std;

void merge(int a[] , int b[] , int m , int n){
    int k = m-1 ; j = 0 , i = 0;
    while(i<=k && j < n){
      if(arr[i] < arr[j]){
          i++;
      }
      else{
          swap(a[k--], b[j++]);
      }
    }
    sort(a ,a+m);
    sort(b ,b+n);

}

int main()
  {  int arr1[] = {1, 3, 5, 7} ;
     int arr2[] = {0, 2, 6, 8, 9} ;
     merge(arr1 , arr2, 4 , 5);
    return 0;
  }