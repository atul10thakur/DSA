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
    }
    return q;
}
