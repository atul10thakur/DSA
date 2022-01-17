#include<bits/stdc++.h>
using namespace std;

bool checkParentehsis(string str , int size){
    stack<char>S;
    char x;
    for(int i = 0 ; i<size ; i++){
        if(str[i] == '{' || str[i] == '(' || str[i] == '[' ){
            S.push(str[i]);
        }
     if (S.empty())
            return false;
    switch(str[i]){
        case '(' :
            x = S.top();
            S.pop();
            if(x == '}' || x == ']'){
                  return false;
            } 
        case '[' :
            x = S.top();
            S.pop();
            if(x == '}' || x == ')'){
                  return false;
            }  
        case '{' :
            x = S.top();
            S.pop();
            if(x == ')' || x == ']'){
                  return false;
            }            
    }
        
    }
    if(S.empty()){
        return true;
    }
}

int main()
{     string str = "[()]{}{[()()]()}";
    cout<<checkParentehsis(str, str.length());
    return 0;
     }