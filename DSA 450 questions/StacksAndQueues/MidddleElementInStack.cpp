#include<bits/stdc++.h>
using namespace std;


struct Node{
Node *next;
Node *prev;
int data;
Node(int x ){
	data = x;
	prev = next = NULL;
   }
} ;

struct Node *dummy = new Node(-1);
struct Node *head = dummy;
struct Node *mid = dummy ;
int countNode = 0;
	
void push(int data){
	Node *curr = new Node(data);
	curr->next=head;
	curr->prev= NULL;
	countNode++;
	head->prev = curr;
	head = curr;
	if(countNode == 1){
		mid = curr;
	}
	else if(countNode %2 == 0){
		mid = mid->prev;
	}
}
	
int pop(){
	if(countNode == 0){
		return -1;
	}
	countNode--;
	Node *temp = head;
	int x = head->data;
	head = head->next;
	if(head!= NULL){
		head->prev = NULL;
	}
	if(countNode & 1){
		mid = mid->next;
	}
	return x;
}

int middle(){
	if(countNode == 0){
		return -1;
	}
	return mid->data;
}
	
int min(){
	
   struct Node *curr = head;
	push(10);
	push(20);
	push(320);
	push(40);
	push(540);
	
	for(int i =0 ; i<countNode ; i++){
		cout<<curr->data<<" ";
		curr =curr->next;
	}
	
	return 0;
}



















