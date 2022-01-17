//LinkList1 = 3->6->9->common
//LinkList2 = 10->common
//common = 15->30->NULL

int intersectPoint(Node* head1, Node* head2)
{
    int a = 0 ;
    int b = 0 ;
    Node *curr = head1;
    Node *temp = head2;
    int c1 = 0;
    int c2 = 0;
   while(curr != NULL){
       c1++;
       curr = curr->next;
   }
    while(temp != NULL){
       c2++;
       temp = temp->next;
   }
   curr =head1;
   temp =head2 ; 
   int c = abs(c1-c2);
   if(c1>c2){
       for(int i = 0 ; i<c ; i++) curr= curr->next;
   }
   else if(c1 < c2){
       for(int i = 0 ; i<c ; i++) temp = temp->next;
   }
   while(curr != temp ){
       curr = curr->next;
       temp = temp->next;
   }
   if(curr) return curr->data;
    return -1;
}


