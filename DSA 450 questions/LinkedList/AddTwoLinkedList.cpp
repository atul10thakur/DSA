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

void addTwoNumbers(node* l1, node* l2) {
        node *dummy =new node(0) ;
        node *temp  = dummy;
            int carry = 0;
        while(l1 != NULL && l2 != NULL && carry == 1)
        {   int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
         if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
         sum += carry;
         cout<<"sum is : "<<sum <<" \n";
         carry = sum/10;
         node *new_node = new node(sum % 10);
         temp ->next = new_node;
         temp = temp->next;
        }
        
//        return dummy->next;
       
}
int main(){
	node *temp = new node(10);
     temp->next = new node(20);
     temp->next->next = new node(30);
     temp->next->next->next = new node(40);
     node *new_temp = new node(15);
     new_temp->next = new node(25);
     new_temp->next->next = new node(35);
     new_temp->next->next->next = new node(45);
     addTwoNumbers(temp , new_temp);
	return 0;
}
