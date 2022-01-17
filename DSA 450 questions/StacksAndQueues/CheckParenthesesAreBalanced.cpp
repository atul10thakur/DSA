
#include<bits/stdc++.h>
using namespace std;


bool checkParenthese(string str){
		stack<int>s;
	for(int i = 0 ; i<str.length() ; i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '['){
			s.push(str[i]);
		}
		if(s.empty()){
		    return false;
		}
		else{
			if(str[i] == '}'){
				if(s.top() == '(' || s.top() == '['){
					return false;
				}
				s.pop();
			}
			else if(str[i] == ')'){
				if(s.top() == '[' || s.top() == '{'){
					return false;
				}
				s.pop();
			}
			else if(str[i] == ']'){
				if(s.top() == '(' || s.top() == '{'){
					return false;
				}
				s.pop();
			}
		}
	}
	if(s.empty()) return true;
    }
}

int main(){
	string str = "[({))]" ;
	cout<<checkParenthese(str);
	return 0;
}
