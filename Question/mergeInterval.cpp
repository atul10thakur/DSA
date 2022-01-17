#include<bits/stdc++.h>
using namespace std;

bool mycomp(Interval a, Interval b)
{ return a.s < b.s; }

int MergeInterval(int arr[4][2] )
{   sort(arr, arr+n, mycomp);
       int 
    for(int i = 0 ; i < arr[0].size(); i++){
        if(arr[i][1] >= arr[i+1][0]){
           
        }
    }
}

int main()
  {  int intervals[4][2] ={{1,3}, {2,6} , {8,10} , {15,18}};
     MergeInterval(intervals ,)
    return 0;
  }