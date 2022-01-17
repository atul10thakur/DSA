#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[] , int size){
    unordered_set<int>un;
    for(int i = 0 ; i<size ; i++){
        if(un.find(arr[i]) != un.end()){
            return arr[i];
        }
        un.insert(arr[i]);
    }
}

int main()
{ 
    int arr[] = {6,2,1,3,2};
    cout<<duplicate(arr, 5);
 return 0; 
}