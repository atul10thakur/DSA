#include<bits/stdc++.h>
using namespace std;

struct Node{
int data ;
Node *next;

Node(int x){
	data = x;
	next = NULL;
}
	} ;
	
Node * Lomedo(Node *start , Node *end){
	
	if(start == NULL || end == NULL || start == end){
		return start;
	}
	Node *curr = start;
	Node *prev = curr;
	int pivot = end->data ;
	 
  while(start != end){
  	if(start->data < pivot){
  		prev = curr;
  		int temp = curr->data;
  		curr->data = start->data;
  		start->data = temp;
  		curr=curr->next;
	  }
	  start = start->next;
  }
  Node *node = curr;
  curr->data= end->data;
  end->data = node->data;
	return prev;
}

void Sort(Node *head , Node *end){
	if(head == end){
		return;
	}
	Node *pivot = Lomedo(head , end);
	Sort(head,pivot);
	Sort(pivot->next,end);
}	
	

int main(){
	Node *temp = new Node(10);
	temp->next = new Node(5);
	temp->next->next = new Node(1);
	temp->next->next = new Node(20);
	temp->next->next->next = new Node(7);
	Sort(temp , temp->next->next->next);
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	return 0;
}
