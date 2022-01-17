#include<bits/stdc++.h>
using namespace std;

int Max(int arr[] , int low , int high){
int mid = low+high/2;

if(low == high){
    return arr[low]; 
}

if(low+1 == high){
    return max(arr[low],arr[high]);
}

 int min1 =  Max(arr, low , mid);
 int min2 = Max(arr, mid+1 , high);

return max(min1, min2);

}
int main(){
    int arr[] = {55,8,13,22,10};
    cout<<Max(arr, 0 , 4);
    return 0;
}