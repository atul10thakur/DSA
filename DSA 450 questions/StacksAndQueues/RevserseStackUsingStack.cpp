#include<bits/stdc++.h>
using namespace std;

stack<int>s;
void insertAtBottom(int x){
	if(s.empty()){
		s.push(x);
		return ;
	}else{
		int top = s.top();
		s.pop();
		insertAtBottom(x);
		s.push(top);
	}
}

void reverse()
{
	 if(s.empty()){
	 	return ;
	 }
	else{
		int x = s.top();
		s.pop();
		reverse();
		insertAtBottom(x); 
	}
}


int main(){
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<"\n";
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	reverse();
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
