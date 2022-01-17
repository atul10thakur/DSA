
#include<bits/stdc++.h>
using namespace std;

 int checkInvalidParentheses(string str){         // to  check number of invalid parentheses 
        stack<char>s;
        for(int i = 0 ; i<str.length() ; i++){
            if(str[i] == '(')
            {
                s.push('(');
            }
            else if(str[i] == ')' ) {
                if(s.top() == '(' && s.size() != 0 ){
                    s.pop();
                }
                else{
                    s.push(')');
            }
        }
    }
            return s.size();
    }

void solve(string str , int ip , unordered_map<string , bool>&map , vector<string>&ans){
        
       if(map[str]){             // check if duplicate answer is present or not 
        return ;
           }
            map[str] = true;
            
            if(ip == 0 ){          // when we remove all invalid parentheses
                int IP = checkInvalidParentheses(str);      // check new string have valid parentheses
                if(IP == 0){           // if new string have no invalid parentheses then push into answer
                    ans.push_back(str);
                }
                return ;
            }
        
        for(int i = 0 ; str.length() ; i++){       // to check for each character 
            string left  = str.substr(0,i);          
            string right = str.substr(i+1);
            solve(left+right , ip-1 , map , ans);       // here we will check for each parentheses by removing that it will make valid parentheses or not ..
        }
        return ;
    }
    
    
   
    
    vector<string> removeInvalidParentheses(string s) {
        int ip = checkInvalidParentheses(s);
        unordered_map<string , bool>dup;
        vector<string>ans;
        solve(s , ip ,dup , ans);
        return ans;
    }
    
     int main(){
     vector<string>v = removeInvalidParentheses("(()))") ;
     for(int i= 0 ; v.size() ; i++){
     	cout<<v[i]<<" ";
	 }
     	return 0;
	 }
    
    
