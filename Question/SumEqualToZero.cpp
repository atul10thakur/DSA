#include<bits/stdc++.h>
using namespace std;

void SumWithZero(int arr[] , int size){
   unordered_set<int>m;
   int sum = arr[0];
   m.insert(arr[0]);
   for(int i = 1 ; i<size ; i++){
         if(arr[i] == 0){
             cout<<"true";
             return ;
         }
          sum+=arr[i];
         if(sum == 0){
             cout<<"true";
            return ;
         }
         else{
             if(m.find(sum) != m.end()){
                 cout<<"true";
                 return;
             }
         
         }
         m.insert(sum);
   }
   cout<<"false";
   return ;
}

int main(){
    int arr[6] = {7,3,2,1,-4,6};
    SumWithZero(arr,6);
    return 0;
}