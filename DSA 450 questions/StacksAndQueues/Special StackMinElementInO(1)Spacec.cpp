int mi =999999;
void push(stack<int>& s, int a){
	if(s.empty()){
	    mi = a;
	    s.push(a);
	}
	else{
	    int x = a;
	     if(mi > a){
	         x = 2*a - mi;     // if we found element smaller then min the we update min but in stack we store value using this formula
	         mi = a;                 // and in stack it will always give smaller value then the min 
	     }
	    s.push(a);
	}
}

bool isFull(stack<int>& s,int n){
    if(s.size() == n) return true;
    else return false;
}

bool isEmpty(stack<int>& s){
	if(s.empty()) return true ;
	else return false;
}

int pop(stack<int>& s){
	int x = s.top();
	if(x>= mi) s.pop();
	else{                  // whille poping if we found element smaller then min then we just do the reverse of the formula and get the min element back...
	    int y = 2*mi - x;
	    s.pop();
	    mi = y;
	}
}

int getMin(stack<int>& s){
	return mi;
}
