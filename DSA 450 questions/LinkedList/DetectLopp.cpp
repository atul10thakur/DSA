struct node{
	int val 
	node *next; 
	node(x){
		val = x;
		next = NULL;
	}
};
 bool detectLoop(Node* head)
    {
        Node *curr = head;
        while(curr != NULL){
            if(curr->data == -1){
                return true;
            }
            curr->data = -1;
            curr = curr->next;
        }
        return false;
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
