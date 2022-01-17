
// nums[] = {10, 3, 5, 6, 2}
//Output:
//180 600 360 300 900
//Explanation: 
//For i=0, P[i] = 3*5*6*2 = 180.
//For i=1, P[i] = 10*5*6*2 = 600.
//For i=2, P[i] = 10*3*6*2 = 360.
//For i=3, P[i] = 10*3*5*2 = 300
//For i=4, P[i] = 10*3*5*6 = 900

int sum(vector<long long int>, int size ){
	vector<long long int>l(n),r(n);
      l[0] = 1 ;
      r[n-1] = 1;
       for(int i = 1 ; i<arr.size() ; i++){
          l[i] = l[i-1]*arr[i-1];
       }
       for(int i = n-2 ; i>=0 ; i--){
          r[i] = r[i+1]*arr[i+1];
       }
       for(int i = 0 ; i<arr.size() ; i++){
           arr[i] = l[i] * r[i];
       }
       return arr;
}

#include<bits/stdc++.h>
using namespace std; 
int main(){
	vector<int>v = {10, 3, 5, 6, 2};
	sum(v , v.size());
	return 0;
}
