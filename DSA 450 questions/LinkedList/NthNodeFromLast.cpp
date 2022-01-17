 struct Node *cur = head;
       struct  Node *prev = NULL;
        struct Node *next;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
       cur = prev;
       int i = 1;
       while(cur != NULL){
           if(i == n) return cur->data;
           i++;
           cur = cur->next;
       }
       return -1;
