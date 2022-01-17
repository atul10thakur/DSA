#include<bits/stdc++.h>
using namespace std;

int findFirstOneindex(int arr[4][4] , int size){
int x = 1 , mid =0 ;
int low = 0 , high =size-1; 
while(low<=high){
    mid = low+mid/2;
    if(arr[mid][0]>x){
        low = mid+1;
    }
    else if(arr[mid][0] < x){
        high= mid-1;
    }
    else{
        return mid;
    }
}
return -1;
}

int findMaxOnesInRow(int arr[4][4] , int size){
//     // int idx = findFirstOneindex(arr , 4);
//     int res =0;  
//     if (idx == -1) 
//         {
//          idx = size - 1;
//              }
//    for(int i = 1 ; i<size ; i++){
//        while(idx >=0 && arr[idx][i] == 1 );{
//         idx --;
//         res = i;
//        }
//    }
//    return res;
return 1;
}

int main()
{   int arr[4][4]= { {0, 0, 0, 1}, 
                     {0, 0, 1, 1},
                     {1, 1, 1, 1},
                     {0, 1, 1,1} } ;
    cout<<findMaxOnesInRow(arr, 4);
    return 0;
     }