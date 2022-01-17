#include<bits/stdc++.h>
using namespace std;

void SpiralTraversalOFMatrix(int arr[4][4] , int size){
    int left =0 ,  top = 0 , right = size-1 , bottom = size-1 ;
    while(top<=bottom && left<=right) {
        for(int i = left ; i<=right ; i++ ){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int j =top ; j<=bottom ; j++){
            cout<<arr[j][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i = right ; i >left ; i--){
                cout<<arr[bottom][i]<<" ";
            }
          bottom --;
        }
        if(left<=right){
            for(int j = bottom ; j>top ; j--){
                cout<<arr[j][left]<<" ";
            }
            left--;
        }
    }
}

int main() 
{    int arr[4][4]= {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}} ;
        SpiralTraversalOFMatrix(arr, 4);
    return 0 ;
     }