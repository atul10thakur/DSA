#include<bits/stdc++.h>
using namespace std;

int LCP(string str[] , int size){
    int res = INT_MAX ;
    string c = str[0];
    for(int i = 1 ; i<size ; i++){
        int j = 0 ,k = 0 , curr_res = 0 ;
        while(j<c.length() && k < str[i].length())
        {
            if(c[j] == str[i][k]){
                curr_res++;
            }else{
                break;
            }
            j++;
            k++;
        }
        res = min(res , curr_res);
    }
    return res;
    
}

int main()
{   string str[3] = { "flower" , "flow" , "flight" } ;
   cout<< LCP(str ,3); 
    return 0;
     }