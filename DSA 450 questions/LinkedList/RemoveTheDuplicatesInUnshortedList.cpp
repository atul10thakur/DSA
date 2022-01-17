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

 Node * removeDuplicates( Node *head) {
    Node * cur = head;
    
    if(cur->next == NULL || cur == NULL){
        return head;
    }
    map<int , int >m;
    m[cur->data]++ ;
    Node * prev = cur;
    cur = cur->next;
    while(cur != NULL){
        if(m[cur->data]){
            prev->next = cur->next;
            free(cur);
        }
        else{
            m[cur->data]++;
            prev = cur;
        }
        cur = prev->next;
    }
    return head;
    }


int main(){
	node *temp = new node(10);
     temp->next = new node(20);
     temp->next->next = new node(30);
     temp->next->next->next = new node(40);
	retrurn 0;
}
