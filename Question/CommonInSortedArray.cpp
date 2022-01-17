#include <bits/stdc++.h>
using namespace std;

void commonElement(int arr1[] ,int arr2[],int arr3[] , int n1, int n2 , int n3){
    int CE[5] ,  l = 0;
  int i =0, j = 0, k = 0;
while( i < n1 && j<n2 && k<n3){
    if(arr1[i] < arr2[j] && arr1[i] < arr3[k]){
        i++;
    }
    else if(arr2[j] < arr1[j] && arr2[j] < arr3[k]){
        j++;
    }
    else if(arr3[k] < arr1[i] && arr3[k] < arr2[j]){
        k++;
    }
    else{
      CE[l++] = arr1[i];
        i++; j++;k++;
    }
}
cout<<CE[0]<<" "<<CE[1]<<" ";

}

int main(){

    int arr1[]= {1,5,10,20,40,80};
    int arr2[]= {6,7,20,80,100};
    int arr3[]= {3,4,15,20,30,70,80,100};
    commonElement(arr1, arr2, arr3 , 6 , 5 , 8);
    return 0;
}