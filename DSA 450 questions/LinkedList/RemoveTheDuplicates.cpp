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

void removeDuplicates(struct Node* curr)
{      
    Node* head = curr;
    
    while(head !=  NULL){
        if(head->data == head->next->data){
            head->next = head->next->next;
        }
        else head = head->next;
    }
}


int main(){
	node *temp = new node(10);
     temp->next = new node(20);
     temp->next->next = new node(30);
     temp->next->next->next = new node(40);
	retrurn 0;
}
