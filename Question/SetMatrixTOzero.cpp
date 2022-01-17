#include<bits/stdc++.h>
using namespace std;

void SetZero(int arr[4][4] , int size){
    int col0 = 1;
   for(int i = 0; i < size;i++){
        if(arr[i][0]){
                col0 =0;
            }
        for(int j = 1 ; j < size ;j++){
            if(arr[i][j] == 0)
               { arr[i][0] = arr[0][j] = 0; }
        }
   }
   for(int i = size-1; i >=0;i--){
        for(int j = size-1 ; j>=1 ;j--){
            if(arr[i][0] == 0 || arr[0][j] == 0){
                  arr[i][j] = 0; 
                  }
        }
        if(col0 == 0 ){
                arr[i][0] = 0; 
                }
   }
}

int main()
{ 
     int arr[4][4] = { {1,1,1,1} , {1,0,1,1} , {1,1,0,1} , {0,0,0,1} } ;
     SetZero(arr, 4);
      for(int i = 0; i <4;i++){
        for(int j = 0 ; j <4 ;j++){
         cout<<arr[i][j]<<" "; 
   }
    cout<<endl;
      }
 return 0; 
}