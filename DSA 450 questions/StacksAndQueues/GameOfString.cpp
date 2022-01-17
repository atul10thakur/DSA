
// here we have to remove k times a char. so it will make minimum sum
// here we just decreament the value which have most occurrence upto K time

int minValue(string s, int k){
    unordered_map<char , int>m;
    for(int i=0 ; i<s.length();i++){     // store all occurrences of the char.
        m[s[i]]++;
    }
    priority_queue<int>pq;         // inserting in max heap
    for(auto x : m){
        pq.push(x.second);
    }
    while(k){                        // now decreating the largest count value of char. from max heap every time upto K 
        int x = pq.top();               // anad again it will heapyfiy and give largest count and agin we decrease the value upto K times 
        pq.pop();           
        x--;
        pq.push(x);
        k--;
    }
    int sum=0;
    while(!pq.empty()){          
        int x = pq.top();
        pq.pop();
        sum += x*x;
    }
    return sum;
    }
