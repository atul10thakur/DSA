#include<bits/stdc++.h>
using namespace std;

int countAndSay(int arr[] , int size){
	string t ="";
	for(int i = 0 ; i<)
	int count = 1 ;
	for(int i = 1 ; i<size ; i++){
		if(arr[i] != arr[i]){
			t += to_string(count); 
			t+=  arr[i-1];
			count = 1;
		}{
		count ++;
		}
	}
	c
}

int main(){
	 int arr[] = {3,3,2,2,2,1,5};
	 countAndSay(arr , 7) ;
	return 0;
}
