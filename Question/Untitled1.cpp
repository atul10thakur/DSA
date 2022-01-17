#include <bits/stdc++.h>
using namespace std ; 

int CountReversal(string str , int size){
	float res = 0;
	int l = 0 , R = 0;
	for(int i = 0 ; i<size ; i++){
		if(str[i] == '{'){
			l++;
		}
		else{
			if(l == 0){
				R++;
			}else{
				l--;
			}
		}
	}
	res = ceil(l/2) +ceil(R/2);
	return res;
}

int main(){
	string str = "}{{}}{{{" ;
	cout<<CountReversal(str, str.length());
	return 0;
}
