#include<bits/stdc++.h>
using namespace std;

int repeating(int arr[] , int size){
   set<int>un;
   for(int i = 0 ; i<size ; i++){
       if(un.find(arr[i]) != un.end()){
           return arr[i];
       }
       un.insert(arr[i]);
   }
}

int main()
  {
      int nums[4] = {1, 3 ,2, 4 };
      repeating(nums , 4);

    return 0;
  }