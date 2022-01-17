#include<iostream>
using namespace std ;

void sort(int arr[], int size){
    int C0 = 0 , C1 = 0 ,C2 = 0;
    for(int i = 0 ;i<size  ;i++){
        if(arr[i] == 0){
            C0++;
        }
        else if(arr[i] == 1){
            C1++;
        }
        else{
            C2++;
        }
    }
    int index = 0;
    for(int i = 0 ;i<C0 ; i++){
        arr[index++] = 0;
    }
     for(int i = 0 ;i<C1 ; i++){
          arr[index++] = 1;
    }
     for(int i = 0 ;i<C2 ; i++){
          arr[index++] = 2;
    }
    
}

int main(){
    int arr[] = {0,1,0,2,0,1};
    sort(arr, 6);
    for(int i = 0 ;i<6 ; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}
