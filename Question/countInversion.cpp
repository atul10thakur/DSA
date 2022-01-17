#include<bits/stdc++.h>
using namespace std;

int MergeAndInversion(int arr[] , int low , int high , int mid){
    int size1 = mid - low +1 , size2 = high-mid;
    int arr1[size1] , arr2[size2];
    for( int i = 0 ;  i< size1 ; i++){
        arr1[i] = arr[i+low];
    }
    for( int i = 0 ;  i< size2 ; i++){
        arr2[i] = arr[mid+i+1];
    }
    int res = 0 ,  i = 0  , j = 0 , k = low ;
    while( i < size1 && j < size2){
        if(arr1[i] <= arr2[j] ){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
            res+=  size1 - i ;
        }
    }
     while(i<size1){
            arr[k++] = arr1[i++]; 
        }
        while(j<size2){
            arr[k++] = arr2[j++]; 
        }
        return res;
}

int Inversion(int arr[], int low , int high){
    int res = 0 ; 
    if(low < high){
        int mid = (low + high) / 2 ;
        res += Inversion(arr , 0 , mid);
        res+=Inversion(arr , mid+1 , high);
       res += MergeAndInversion(arr, low , high , mid);
    }
    return res;
}

int main()
  {   int arr[5] ={ 2 ,4,1,3,5};
      cout<<Inversion(arr, 0 , 4); 
    return 0;
  }