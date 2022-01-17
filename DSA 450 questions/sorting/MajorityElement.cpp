#include<bits/stdc++.h>
using namespace std ;

int majorityElement(int arr[], int size)
{
    int count = 1 ,pos =0; 
 for(int i = 1 ; i< size ; i++){
     if(arr[i] == arr[pos]){
         count ++;
     }
     else{
         count--;
     }
     if(count == 0){
         pos = i;
         count = 1;
     }
 }  
 count = 0 ;
 for(int i = 0 ; i<size ; i++){
     if(arr[pos] == arr[i]){
         count ++;
     }
 }
   if(count > size/2){
     return arr[pos];
 }else{
     return -1;
 }
}
int main(){
	int A[] = {1,2,3};
	majorityElement(A , 3);
	return 0;
}
