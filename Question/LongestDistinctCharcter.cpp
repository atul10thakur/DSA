#include<bits/stdc++.h>
using namespace std;

int LongestString(string str, int length){
    vector<int>mapp(256,-1);
    int res= 0;
    int left = 0 , right = 0;
    while(right < length){
     if(mapp[str[right]] != -1){
         left = max(left , mapp[str[right]]+1);
     }
     mapp[str[right]] = right;
     right ++;
     res = max(right-left , res);
    }
    return res;
}

int main()
{   
    string str = "abcabaefbcbab";
   cout<<LongestString(str , str.length());
    return 0;
}