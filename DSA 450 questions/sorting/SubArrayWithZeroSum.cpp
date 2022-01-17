#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

void sum(int arr[] , int size){
    unordered_map<int, int>un ;
    un[0] = 1;
    int sum =0 ;
    int ans =0;
    for(int i = 0 ; i<size ; i++){
    	sum +=arr[i];
    	if(un.find(sum) != un.end() ){
    		ans+=un[sum];
		}
		un[sum]++;
	}
	cout<<ans;
	}

int main()
{   int arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7} ;
	sum(arr, 10);
    return 0;}
