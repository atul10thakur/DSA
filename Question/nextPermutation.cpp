#include<bits/stdc++.h>
using namespace std;

 void nextPermutation(vector<int>& arr) {
        int idx = -1;
        for(int i = arr.size()-1 ; i>=0 ; i--){
            if(arr[i] > arr[i-1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(arr.begin() , arr.end());
        }
       else{
           int next = idx;
            for(int j = idx+1 ; j<arr.size() ; j++){
            if(arr[j] > arr[idx-1] && arr[next] >= arr[j]){
                 next = j;
            } 
        }
        swap(arr[idx-1], arr[next]);
        reverse(arr.begin()+idx , arr.end());
       }
    }

int main()
  {  vector<int>arr=  {1, 2, 3, 6, 5, 4};
     nextPermutation(arr);
      for(int i = 0 ; i<arr.size() ; i++){
          cout<<arr[i]<<" ";
      }
    return 0;
  }