 
    Node *merge(Node * a , Node *b){
        Node *result ;
        if(a == NULL) return b ;
        if(b == NULL) return a;
        if(a->data <= b->data){
            result = a;
            result->next = merge(a->next , b); 
        }else{
            result = b;
            result->next = merge(a,b->next);
        }
        return result;
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
          int i = 0 , j ;
          int last = K-1;
          while(last!=0){
              i = 0;
              j = last;
              while(i<j){
                  arr[i] = merge(arr[i] , arr[j]);
                  i++;
                  j--;
              }
              if(i>=j){
                  last = j;
              }
          }
          return arr[0];
    }
