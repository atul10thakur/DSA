#include<bits/stdc++.h>
using namespace std ;

int  findSum(int arr[], int low , int high , int mid){
    int i = mid ;
   int  j = mid+1;
    int LeftSum = 0 , RightSum = 0;
    while(i>=low){
        LeftSum +=arr[i--];
    }
    while(j<high){
        RightSum +=arr[j++];
    }
    int res = max(LeftSum , RightSum) ;
    int sum = max(LeftSum+RightSum , res );
   return sum;
}

int MaxSumInSubArray(int arr[] , int low ,int  high){
   if( low == high){
       return arr[low];
   }
   int mid = low+high / 2;
   int LeftSum = MaxSumInSubArray(arr, low , mid);
   int RightSum = MaxSumInSubArray(arr, mid+1 , high);
   int centertSum = findSum(arr, low , high, mid);
     int res = max(LeftSum , RightSum) ;
    int sum = max(LeftSum+RightSum , res );
   return sum;
}

int main(){
    int arr[]= {1,-1,5,-2,3} ;
    cout<<MaxSumInSubArray(arr ,0 , 5);
    return 0;
}