
// I/p- 1 2 3 4 5 6 input is in queue form
// O/p - 1 4 2 5 3 6

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>s;
    for(int i =0 ; i<k ; i++){
        int x = q.front();
        q.pop();
        s.push(x);
    }
    while(!s.empty()){
        int x = s.top();
        s.pop();
        q.push(x);
    }
    for(int i=0 ; i<q.size()-k ; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }                                         // first 3 loops are for reversing k elements in queue...
    
     for(int i =0 ; i<k ; i++){        // again push first k elements in stack
        int x = q.front();
        q.pop();
        s.push(x);
    }
    while(!s.empty()){       // now take one element from stack and one from queue and push again into queue ...
    q.push(s.top());
	s.pop();
	q.push(q.front());
	q.pop();	
	}
	return q;
}

bool check(queue<int>in , queue<>)


int main(){
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	int mid = q.size()/2;
	modifyQueue(q, mid);
}
