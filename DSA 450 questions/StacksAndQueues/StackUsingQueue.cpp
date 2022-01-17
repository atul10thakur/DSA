

void push(int x)       // using 2 queues q1 ans q2  
{       
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);
        
}

void push(int x){
	queue<int>q;
	q.push(x);
	int x = size-1;
	while(x--){
		q.push(q.front());        // pushing front element to queue again from size-1 to 0 index 
		q.pop();
	} 
}

int pop()
{
        int ans ;
        if(q.empty()){
            ans =  -1;
        }
        else{
                ans = q.front();
                q.pop();
        }
        return ans;
}
