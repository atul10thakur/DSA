#include<bits/stdc++.h>
using namespace std;

int CountSubsequenceInBinaryString(string str , int size){
    int count1 = 0 , count0 = 0 , count=0;
 for(int i = 0 ; i<size ; i++){
     if(str[i] == '0'){
         count0++;
     }else{
         count1++;
     }
     if(count1 == count0){
         count++;
     }
 }
 if(count == 0 ){
     return -1;
 }
 return count;
}

int main()
{    string str = "0111100010";
cout<<CountSubsequenceInBinaryString(str , 10);
    return 0;
     }