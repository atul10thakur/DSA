
#include<bits/stdc++.h>
using namespace std;


Node * reverse(Node *head){
     Node *prev = NULL;
     Node *curr = head , *temp;
     while(curr != NULL){
         temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;
     }
     return prev;
    }
    
    public:
    Node* addOne(Node *head) 
    {    
        bool f = false;
    head = reverse(head);
    Node *curr = head;
    while(curr != NULL && f == false){
        if(curr->data == 9 && curr->next == NULL){
            curr->data = 1;
            Node *new_node = new Node(0);
            new_node->next = head;
            head =  new_node;
            curr = curr->next;
        }
        
        else if(curr->data == 9){
            curr->data = 0;
            curr= curr->next;
        }
        else{
            curr->data  = curr->data + 1;
            curr = curr->next;
            f= true;
        }
    }
    head = reverse(head);
    return head;
    }
    
  int main(){
  	return 0;
  	
  }  
