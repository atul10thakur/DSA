int evaluatePostfix(char* exp)
{
     stack<int>ans;
      for(int i =0 ; i<exp.length() ; i++){
          if(exp[i] >= '0' && exp[i] <= '9' ){
              ans.push(exp[i] - '0');
          }
          else{
              int x = ans.top();
              ans.pop();
              int y = ans.top();
              ans.pop();
              if(exp[i] = '+'){
                  ans.push(x+y);
              }
              else if(exp[i] = '-'){
                   ans.push(x-y);
              }
              else if(exp[i] = '*'){
                   ans.push(x*y);
              }
              else if(exp[i] = '/'){
                   ans.push(x/y);
              }
          }
          return ans.top()
      }
}
