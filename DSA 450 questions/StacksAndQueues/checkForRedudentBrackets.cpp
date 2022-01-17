#include<bits/stdc++.h>
using namespace std;

bool haveRedundentOrNot(string  str){
	stack<char>s;
	for(int i=0 ; i<str.length() ; i++){
		if(str[i] != ')'){
			s.push(str[i]) ;          // push all elements in stack expect for " ) "
		}
		else if(str[i] == ')'){                  
			if(s.top() == '(' ){               // if we find like this () this means its has no operator or operand between parenthese ...
				return true;
			}
			else{                    // find other than " ) "
				while(s.top() != '('){            // just pop
					s.pop();
				}
				s.pop() ;                // when we find  " ) " just pop it out
			}
		}
	}
	return false;
}

int main(){
	string str = "(a+(a+b))";
	cout<<haveRedundentOrNot(str);
	return 0 ;
}
