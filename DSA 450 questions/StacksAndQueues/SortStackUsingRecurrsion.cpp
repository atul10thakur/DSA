void insertAtCorrectPosition(stack<int>&s,int x){
    if(s.empty() || s.top() < x){
        s.push(x);
        return;
    }
   else{
    int top = s.top();
    s.pop();
    insertAtCorrectPosition(s , x);
    s.push(top);
   }
}

void reverse(stack<int>&s){
    if(s.empty()){
        return;
    }else{
        int x = s.top();
        s.pop();
        reverse(s);
        insertAtCorrectPosition(s , x);
    }
}
