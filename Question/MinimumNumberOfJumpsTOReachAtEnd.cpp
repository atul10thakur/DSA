#include<bits/stdc++.h>
using namespace std;

int jumps(int arr[] , int size){
    int res = INT_MAX;
    for(int i = 0 ; i<size ; i++){
            if(arr[i] + i >= size-1){
                int sub_res = jumps(arr , i+1);
                if(sub_res != INT_MAX){
                    res = min(res , sub_res + 1);
                }
            }
    }
    return res;
}

int main()
{ 
    int arr[] = {1,3,5,8,9,2,6,7,6,8,9};
   cout<< jumps(arr, 11 );
 return 0; 
}