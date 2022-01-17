#include<bits/stdc++.h>
using namespace std ;


void stackPermutation(int in[] , int out[] , int size){
	stack<int>s;
	int j =0 ;
	for(int i=0 ; i<size ; i++){
		s.push(in[i]);       // pushing all elements in stack 
		while(s.top() == out[j] && !s.empty()){           
			s.pop();             // pop all elements from stack and in out array .....
			j++;
		}
	}
	if(j == size){
		cout<<"valid stackPermutation" ;
	}
	else cout<<"not valid stackPermutation";
}
int main(){
	int in[5] = {1,2,3,4,5} ; 
	int out[5] = {4,5,3,2,1};
	stackPermutation(in , out , 5);
	return 0 ;
}
	
