 
 
 
 int findMaxLen(string s) {
        stack<char>ch;    // for storing brackets ...
        stack<int>index;       // for storing the index of opening parentheses ...
        index.push(-1);
        int ans = 0;
        for(int i = 0 ; i<s.length() ; i++){ 
            if(s[i] == '(' ){    // when we find opening brackets ...
                index.push(i);
                ch.push(s[i]);
            }
            else{              // when we find closing bracket  
                if(ch.size() != 0 && ch.top() == '(' ){   // difference --- here we are checking the brackets are present in stack or not .....
                    index.pop();        // just pop first value then compute the length 
                    ch.pop(); 
                    ans= max(ans , i-index.top());       // computing the length 
                }
                else{
                    index.push(i);
                }
            }
        }
        return  ans;
    }
    
    
    
    // mthod 2 --- same but without storing brackets ....
        int findMaxLen(string s) {
        stack<int>index;
        index.push(-1);
        int ans = 0;
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i] == '(' ){
                index.push(i);
            }
            else{
                index.pop();
                if(index.size() == 0){  // difference ---- her we are checking index stack is empty of not 
                    index.push(i);
                }
                else{
                    ans= max(ans , i-index.top());
                }
            }
        }
        return  ans;
    }
    
    
