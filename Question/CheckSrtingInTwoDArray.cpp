#include<bits/stdc++.h>
#include<string.h>
using namespace std ;

int checkString(char str[6][6] , string txt , int i , int j , int idx){
	int found = 0;
	if(i>=0 && j>=0 && j<6 && i<6 && txt[idx] == str[i][j]){
		char temp = txt[idx];
		str[i][j] = 0;
		idx ++;
		if(idx == txt.length()){
			found = 1;
		}
		else{
		found += checkString(str , txt , i-1,j, idx);
		found += checkString(str , txt , i+1,j, idx);
		found += checkString(str , txt , i,j-1, idx);
		found += checkString(str , txt , i,j+1, idx);
		}
		str[i][j] = temp;
	}
	return found;
}


       
int main(){
	char str[6][6] = {
        {'B','B','B','M','B','B'},
        {'C','B','A','B','B','B'},
        {'I','B','G','B','B','B'},
        {'G','B','I','B','B','B'},
        {'A','B','C','B','B','B'},
        {'M','C','I','G','A','M'},
            } ;
            
       string txt= "MAGIC"; 
       int res=0;
       int idx = 0;
       for(int i = 0 ;i <6 ; i++){
       	for(int j = 0 ; j<6 ; j++){
       	res+=checkString(str, txt , i , j , idx);
		   }
	   }
	   cout<<res;
	
	return 0;
}
