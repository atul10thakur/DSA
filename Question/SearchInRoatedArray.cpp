#include<bits/stdc++.h>
using namespace std;

int IndexOfElement(int arr[] , int size, int x){
  int low = 0 , high = size -1 , mid;
  while(low <= high){
      mid = (low + high) / 2;
      if(arr[mid] == x ){
          return mid;
      }
     if(arr[mid] >= arr[low]){
        if(arr[mid] >= x && arr[low] <= x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     if(arr[mid] < arr[high]){
         if(arr[mid] <= x && arr[high] >= x){
             low = mid+1;
        }
        else{
            high = mid -1;
        }
     }
  }
  return -1;
}

int main()
{
    int nums[7] = { 4,5,6,7,0,1,2 } ;
    cout<<IndexOfElement(nums , 7 , 6);
    return 0 ;
}
