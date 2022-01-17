#include<bits/stdc++.h>
using namespace std;




 node* reverseList(node* head) {
        node *prev = NULL;
        node *curr= head;
        node *temp;
        while(curr != NULL){
        	temp = curr->next;
        	curr->next = prev;
        	prev = curr;
        	curr = next;
		}
				return curr;	
    }
    
 node* reverseListRecurrsive(node *head){
 	if(head == NULL || head->next == NULL){
 		return head;
	 }
	 node *new_head = reverseListRecurrsive(head->next);
	  
 }

int main(){
	node *temp = new node(10);
     node *prev = NULL;
     temp->next = new node(20);
     temp->next->next = new node(30);
     temp->next->next->next = new node(40);
     temp->next->next->next->next = new node(50);
	return 0;
}
