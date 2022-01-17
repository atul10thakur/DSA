#include<bits/sdtc++.h>
using namespace std;

 Node* segregate(Node *head) {
    int count[] = {0,0,0} ;
    Node *curr = head;
    while(curr != NULL){
        count[curr->data]++;
        curr= curr->next;
    }
    curr = head;
    int i = 0;
    while(curr != NULL){
        if(count[i] == 0 ){
            i++;
        }
        else{
            curr->data = i;
            count[i] --;
            curr= curr->next;
        }
    }
    return head;
        
    }

int main(){
	return 0;
}
