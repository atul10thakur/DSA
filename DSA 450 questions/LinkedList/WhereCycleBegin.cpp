#include<bits/stdc++.h>
using namespace std;

struct node{
	int val ;  
	node *next; 
	node(int x){
		val = x;
		next = NULL;
	} 
};


node* detectCycleStarting(node *head) {
        
       node *slow = head;
       node *fast = head;
       while(slow != NULL){
       	 slow = slow->next;
		   fast = fast->next->next;
       	if(slow == fast){
       		slow = head;
       		while(slow != fast){
       			slow = slow->next;
       			fast = fast->next;
			   }
			   return slow;
		   }
	   }
        return NULL;
    }


int main(){
	node *temp = new node(10);
     node *prev = NULL;
     temp->next = new node(20);
     temp->next->next = new node(30);
     temp->next->next->next = new node(40);
     temp->next->next->next->next = temp->next;
     node *n = detectCycleStarting(temp);
     cout<<n->val<<" ";
	return 0;
}
