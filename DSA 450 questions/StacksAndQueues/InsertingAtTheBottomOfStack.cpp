#include<bits/stdc++.h>
using namespace std;

stack<int>s;

void insertAtBottom(int x){
	if(s.empty()){
		s.push(x);
		return ;
	}
	else{
		int top = s.top();
		s.pop();
		insertAtBottom(x);
		s.push(top);
	}	
}

int main(){
	s.push(2);
	s.push(5);
	s.push(1);
	insertAtBottom(7);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
