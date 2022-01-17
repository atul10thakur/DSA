#include<bits/stdc++.h>
using namespace std;

int solve(int a[] , int par  , int size , int mid){
    int paratha = 0; 
    int time = 0 ;
    for(int i = 0 ; i<size ; i++){
        time = a[i];
        int j = 2;
        while(time <= mid){
            paratha++;
            j++;
            time += a[i] * j;
        }
    }
    if(paratha >= par) return 1;
    else return 0;
}

int RotiParatha(int arr[] , int par , int size){
    int low = 0 ;
    int high = 100;
    int ans = 0;
    while (low <= high)
    {   
        int mid = (low + high) / 2;
        if(solve(arr, par ,size , mid)){
         ans = mid;
            high = mid+1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main()
{   int arr[] = {4,1,2,3,4};
  cout<<RotiParatha(arr, 10 , 5) ;
    return 0;
     }