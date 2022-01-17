#include<bit/stdc++.h>
using namespace std;

struct node{
	int val ;
	node *next; 
	node *prev;
	node(int x){
		val = x;
		next = NULL;
		prev = NULL;
	}
};


node *reverse(node *head ){
	node *curr = head;
	if(head == NULL){
		return head;
	}
	while(curr != NULL){
		curr = curr->next;
	}
	head = curr;
	curr->next = curr->prev;
	curr->prev = NULL;
	curr = curr->next;
	while(curr->prev != NULL){
		 node *temp = curr->next;
		curr->next = curr->prev
		curr->prev = temp;
		curr= curr->next;
	}
	curr->prev = curr->next;
	curr->next = NULL;
	return head;
}


int main(){
	node *temp = new node(3);
     temp->next = new node(6);
     temp->next->next = new node(2);
     temp->next->next->next = new node(12);
     temp->next->next->next->next = new node(56);
     temp->next->next->next->next->next = new node(8);
     node *temp->prev = NULL ;
     temp->next->prev = temp;
     temp->next->next->prev = temp->next;
     temp->next->next->next->prev = temp->next->next->; 
     temp->next->next->next->next->prev = temp->next->next->next;;
     temp->next->next->next->next->next->prev = temp->next->next->next->next;
	return 0;
}
