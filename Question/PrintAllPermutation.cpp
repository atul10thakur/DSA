#include<bits/stdc++.h>
using namespace std;

void AllPermutation(string str ,int size , int start){
	if(start == size)
	{
	
		cout<<str<<" ";
	}
 	else{
 		for(int i = start ; i<=size ; i++){
 		swap(str[i] , str[size]);
 			AllPermutation(str , size , start+1);
 		swap(str[i] , str[size]);
	 }
	 }
}

int main(){
	string str = "ABC";
	AllPermutation(str, 2 , 0 );
	return 0;
}
