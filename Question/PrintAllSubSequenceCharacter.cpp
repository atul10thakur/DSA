#include<bits/stdc++.h>
using namespace std;

void PrintAllSubsequeceCharacter(string str , int size , int start , string ans){
	if(start == size){
		cout<<ans<<" ";
	}
	else{
	PrintAllSubsequeceCharacter(str , size , start+1 , ans);
	ans +=str[start];
	PrintAllSubsequeceCharacter(str , size, start+1 , ans);
	}
}

int main(){
    string str = "abc";
    PrintAllSubsequeceCharacter(str ,3 , 0 , "");
    return 0;
}
