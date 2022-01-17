#include<bits.sdtc++.h>
using namespaces std ;

int LongestSubString(string str , int size){
	//even
	for(int i = 0 ; i<size ; i++){
		int count = 1 ;
		int low = i ; high = i+1;
		if(arr[low] == arr[high]){
			while(low>=0 && high < size){
				count++;
				low -- ;
				high++;
			}
		}
	}
	// odd 
	for(int i = 0 ; i<size ; i++){
			int count = 1 ;
		int low = i , high = i+2;
		if(arr[low] == arr[high]){
			while(low>=0 && high<size){
				count++;
				low--;
				high ++;
			}
		}
	} 
}

int main(){
	 string str = "aaaabbaa" ;
	 LongestSubString(str , str.length());
	return 0 ;
}
