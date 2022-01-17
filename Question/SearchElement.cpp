#include<bits/stdc++.h>
using namespace std;

int FindElementInMatrix(int arr[4][4] , int size , int x){
    int top = 0 ,  right = size-1;
    while(right>=0 || top<=size){
        if(x < arr[top][right]){
            right--;
        }
       else if(x>arr[top][right]){
            top++;
        }
        else{
            return arr[top][right];
        }
    }
    return -1;
}

int main()
{   int arr[4][4]= { {1, 2, 3, 4}, 
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15,16} } ;
       cout<< FindElementInMatrix(arr, 4 , 10);
    return 0;
     }