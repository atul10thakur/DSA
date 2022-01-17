#include<bits/stdc++.h>
using namespace std;

void merge(int a[] , int b[] , int size1 , int size2){
     int i = 0 , j = 0;
    while(i<size1  && j<size2){
        if(a[i] <= b[j]){
            cout<<a[i++]<<" ";
        }
        else{
            cout<<b[j++]<<" ";
        }
    }
    while(i<size1){
        cout<<a[i]<<" ";
    }
     while(j<size2){
        cout<<b[j++]<<" ";
    }
}

int main()
{   
   int  arr1[] = {0, 1, 2, 5} ;
    int arr2[] = {4, 6, 7, 8, 9} ;
    merge(arr1, arr2, 4 , 5);
 return 0; 
}