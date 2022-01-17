#include<bits/stdc++.h>
using namespace std;

void cyclicRotateByK(int arr[] , int size , int k){
int i = 0 ;
int x =   arr[size-1];
for(int i = size-2 ; i>= 0 ; i-- ){
    arr[i+1] = arr[i];
}
arr[0] = x;
}

int main()
{   int arr[] = {2,5,4,3};
cyclicRotateByK(arr , 4 , 1);
for(int i = 0 ; i<4 ; i++ ){
    cout<<arr[i]<<" ";
}
 return 0; 
}