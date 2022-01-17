#include<bits/stdc++.h>
using namespace std;

void sellStock(int arr[], int size){
    int Min = INT_MAX;
    int maxPrice = 0 ;
    for(int i = 0 ; i<size ; i++){
        if(Min > arr[i]){
            Min = arr[i];
        }
        if(arr[i]- Min > maxPrice){
           maxPrice = arr[i] - Min;
        }
    }
    cout<<maxPrice;
}

int main(){
    int arr[6]={7,1,5,3,6,4};
    sellStock(arr, 6);
    return 0;
}