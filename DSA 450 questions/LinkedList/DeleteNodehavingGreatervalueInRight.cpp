 Node *reverse(Node *head){
        Node *cur = head;
        Node *prev = NULL;
        Node *next;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
        
    }
    
    Node *compute(Node *head)
    {
        head = reverse(head);
        Node *cur = head;
        int max = cur->data;
        Node *prev = head;
        head = head->next;
        while(head != NULL){
            if(head->data >= max){
                max = head->data;
                prev = head;
                head = head->next;
            }else{
                prev->next = head->next;
                head = prev->next;
                
            }
        }
       head =  reverse(cur);
       return head;
    }
