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

struct compare{
	bool operator()(node *first ,  node *second){
		return first->val > second->val; 
	}
};


node *Sort(node *head , int k){
	if(head == NULL){
		return head;
	}
	node *new_head = NULL;
	*node curr;
	priority_queue<node * ,vector<node *> , compare>pq;
	
	for(int i = 0 ; head != NULL && i<=k ; i++){
		pq.push(head);
		head = head->next;
	}
	while(pq != empty()){
		if(new_head ==NULL){
			new_head = pq.top();
			new_head->prev;
			curr = pq.top()
		}
		else{
			new_head->next = pq.top();
			pq.top()->prev = curr;
			curr = pq.top();
		}
		pq.pop();
		if(head == NULL){
			pq.push(head);
			head = head->next;
		}
	}
	curr->next = NULL;
	return new_head;
}


int main(){
	 node *temp = new node(3);
     temp->next = new node(6);
     temp->next->next = new node(2);
     temp->next->next->next = new node(12);
     temp->next->next->next->next = new node(56);
     temp->next->next->next->next->next = new node(8);
	return 0;
}
