#include<bits/stdc++.h>
using namespace std;

int longestSubSqeuenceInArray(int arr[], int size){
    unordered_set<int>s;
    int res = 0;
     int count = 0;
   for(int i = 0 ; i < size ; i++ ){
    s.insert(arr[i]);
   }
   for(int i = 0 ; i < size ; i++)
   {   
       if(s.find(arr[i]-1) == s.end()) {
       	    count = 1;
       	   int currNum = arr[i];
           while(  s.find(currNum+1) != s.end()) {
           	   currNum +=1;
               count ++;
           }
       }
       res = max(count, res);
   }
   return res;
}

int main()
  {  
       int arr[7] =  {104, 100 , 102 , 1 , 103 , 3 , 20  } ;
       int res = longestSubSqeuenceInArray(arr, 7);
       cout<<res;
    return 0;
  }


