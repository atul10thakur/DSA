#include<bits/stdc++.h>
using namespace std;
int min(int x, int y, int z) { return min(min(x, y), z); }

int EditDist(string a ,string b , int m  , int n){
    if(n == 0){
        return m ;
    }
    if(m == 0){
        return n;
    }
    if(a[m-1] == b[n-1]){
        EditDist(a, b , m-1 , n-1);
    }
   return 1
           + min(EditDist(a, b, m, n - 1),
                 EditDist(a, b, m - 1, n),
                 EditDist(a, b, m - 1,n - 1) 
             );
}

int main()
{   
   string str1 = "cat", str2 = "cut" ;
   cout<< EditDist(str1, str2 , 3 , 3 );
    return 0;
     }