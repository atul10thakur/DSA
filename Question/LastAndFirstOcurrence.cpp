#include<bits/stdc++.h>
using namespace std;

int LastAndFirstOcurrence(int arr[] , int size , int x , bool left = false){
    int high = size-1, low = 0,  mid;
    int res = 0;
    while(low<=high){
        mid = low + high / 2;
        if(arr[mid] < x ){
            low = mid+1;
        }
        else if(arr[mid] > x ){
             high = mid-1;
        }
        else{
            res = mid;
            if(left)
              {  
                  high = mid-1;
              }
              else{
                low = mid +1;
              }
        }
    }
    return res;
}

int main()
{   int l , h;
int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 } ;
 bool left = true;
    l =  LastAndFirstOcurrence(arr, 9 , 5 ,left);
    h =  LastAndFirstOcurrence(arr, 9 , 5 );
   cout<< l <<" "<< h <<" ";
    return 0;
}