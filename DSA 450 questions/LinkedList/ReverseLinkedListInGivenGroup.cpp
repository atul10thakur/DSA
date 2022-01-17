#include<bits/stdc++.h>
using namespace std;

struct node{
	int val 
	node *next; 
	node(x){
		val = x;
		next = NULL;
	}
};

 node *reverse(struct node *head, int k)
    {
	node *prev = NULL;
    node *temp;
    node *curr;
    int c= 0;
    while(curr != NULL && c<k){
        temp = curr->next;
        prev = curr;
        curr->next=NULL;
        curr = next;
    	c++;
	}
	if(temp != NULL){
		temp->next = reverse(temp , k);
	}
	return prev;
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
