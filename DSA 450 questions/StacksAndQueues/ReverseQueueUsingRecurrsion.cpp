void reverseQueue(struct Queue *Q){ // here Queue is defined as structure 
    if(size(Q) == 0){
        return ;
    }
    else{
        int x = front(Q);
        dequeue(Q);      // for poping 
        reverseQueue(Q);   // recurrsion
        enqueue(Q , x); // inserting elements ...
    }
}

//Function to reverse the queue.
struct Queue* rev(struct Queue* Q)
{
    reverseQueue(Q);
    return Q;
}

