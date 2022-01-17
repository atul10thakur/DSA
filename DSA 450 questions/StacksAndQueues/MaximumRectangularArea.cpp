long long getMaxArea(long long arr[], int n)
    {
        stack<long long>s;
        long long ma = 0;
        long long i = 0;
        while(i<n){
            if(s.empty() || arr[s.top()] <= arr[i]){     // pushing index value which array have larger values
                s.push(i++);
            }
            else{    // we find smaller value then ttop of stack
                long long x = s.top();          
                s.pop();
                long long ans = arr[x] * (s.empty() ? i : i-s.top()-1) ;   // now computing the area...
                ma = max(ma, ans);
            }
        }
        while(!s.empty()){         // now since sometimes stack will not always be empty so just applying same method here ....
            long long x = s.top();
                s.pop();
                long long ans = arr[x] * (s.empty() ? i : i-s.top()-1) ; 
                ma = max(ma, ans);
        }
        return ma;
    }
