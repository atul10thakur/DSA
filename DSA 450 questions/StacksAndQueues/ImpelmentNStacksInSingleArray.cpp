#include<bits/stdc++.h>
using namespace std;


int arr[6];
int top[3] = {-1};
int nex[6] ;
int fre= 0;

void push( int data , int stack){
	if(fre == -1){
		cout<<"stack is full ...";
	}
    int i = fre;
    fre = nex[i];
    nex[i] = top[stack];
    top[stack] = i;
    arr[i] = data;
}


int pop(int stack){
	if(top[stack] == -1 ){
		cout<<"stack is empty ...";
	}
	int i = top[stack];
	top[stack] = nex[i];
	nex[i] = fre;
	fre = i;
	return arr[i];
}

int main(){
	
	for(int i =0 ; i<5 ; i++){
	nex[i] = i+1;
	}
	nex[5] = -1;
	
	push(1 , 0);
	push(2 , 0);
	push(3 , 1);
	push(4 , 0);
	push(5 , 1);
	
	cout<<pop(0);
	cout<<pop(1);
	cout<<pop(0);
	return 0;
}
