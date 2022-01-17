#include<bits/stdc++.h>
using namespace std;
 void findMiddle(Node *curr , Node** first  , Node** second){
      Node *fast;
      Node *slow = curr;
      fast = curr->next;
      while(fast != NULL){
          fast = fast->next;
          if(fast != NULL){
              slow =slow->next;
              fast=fast->next;
          }
      }
      *first = curr;
      *second = slow->next;
      slow->next = NULL;
      
  }
  
 void  mergeSorting(Node** head){
      Node *curr = *head;
      Node *first;
      Node *second;
       if(!curr || !curr->next) return ;
      findMiddle(curr , &first , &second);
      mergeSorting(&first);
      mergeSorting(&second);
      *head = merge(first , second);
      
  }
 Node* merge(Node *first ,Node *second){
     Node *answer = NULL;
      if(!first){
          return second;
      }
      else if(!second){
          return first;
      }
      
          if(first->data <= second->data){
              answer = first;
              answer->next = merge(first->next ,second);
          }
          else{
              answer = second;
              answer->next = merge(first ,second->next);
          }
      return answer;
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        mergeSorting(&head);
        return head;
    }
int main(){
	Node *node = new Node(10);
	Node *temp = mergeSort(node);
	return 0;
}
