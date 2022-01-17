#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(Node *head)
    {
       Node *fast = head;
        Node *slow = head;
        while(fast != NULL && fast->next!= NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        Node *prev = NULL;
        Node *next;
        Node *curr = slow;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev=curr;
            curr = next;
        }
        
        Node *temp = head;
        while(prev != NULL){
            if(temp->data != prev->data){
                return false;
            }
            temp = temp->next;
            prev = prev->next;
        }
        return true;
    }

int main(){
	return 0;
}
