#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[] , int arr2[] , int size1 ,int size2)
{
int i = 0 ; 
    int j = 0;
    while(i<size1 && j<size2){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            j++;
            i++;
        }
      else if(arr1[i] > arr2[j]){
          j++;
      }
      else{
          i++;
      }
    }
}
int main()
{ 
    int arr1[] = {5,8,10};
    int arr2[] = {5,7,8,9};
    intersection(arr1, arr2 , 3 , 4);
 return 0; 
}