#include<bits/stdc++.h>
using namespace std;

void NegativePostiveElement(int arr[] , int size){
    int left=0 , right = size-1;
    while(left <= right){
       if(arr[left] > 0 ){
           left++;
       }
       else if( arr[left] < 0){
           if(arr[right] > 0 ){
               swap(arr[left],arr[right]);
               left++ ; right--;
           } else{
               right --;
           }
       }
    }
    int i = 0;
    right--;
    while(i<size){
        if( i%2 == 0){
            i++;
        }
        else{
            swap(arr[i],arr[right]);
            i++;right++;
        }
    }
    reverse(arr,arr+size);
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()
  {     int arr[10]={1,-5,-3,2,-7,3, 4 , 5,10,15};
        NegativePostiveElement(arr, 10);
    return 0;
  }