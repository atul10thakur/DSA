#include<bits/stdc++.h>
using namespace std;

int Sum(int a[] , int b[] , int m , int n ){
    int i = 0;
    int s1 = 0;
    int s2 = 0;
    int sum = 0 ;
    int j = 0 ;
    while(i<m && j<n){
        if(a[i] < b[j]){
            s1 +=a[i++]; 
        }
        else if(a[i]>b[j]){
            s2 +=b[j++];
        }
        else{
            sum += max(s1 ,s2)+a[i]; 
            i++;
            j++;
            s1 = 0;
            s2 = 0;
            cout<<sum<<"\n";
        }
    }
    
     while (i<m)
    {
        s1 +=a[i++];
    }
    
    while (j<n)
    {
        s2 += b[j++];
    }
    sum += max(s1 ,s2);
    cout<<s1<<" "<<s2<<" ";
    return sum;
    
}


int main()
{   int a[] = {3 ,5, 7, 9, 20, 25, 30, 40, 55, 56, 57, 60 ,62};
    int b[] = {1 ,4 ,7 ,11, 14, 25, 44, 47, 55, 57, 100};
    cout<<Sum(a, b ,13 , 11);
    return 0;
     }