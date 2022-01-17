#include<bits/stdc++.h>
using namespace std;

int SearchArray(int arr[], int size, int k , int x ){
	int res = -1;
	int i= 0;
	while( i<size){
		if(arr[i] == x){
			res = i ;
			break;
		}
		else{
			i += max(1 , (abs(arr[i] -x))/k );
		}
	}
	return res ;
} 

int main()
{   int arr[] = { 5,6,7,9,11,12};
	cout<<SearchArray(arr , 7 , 2 , 11);
	return 0;
}
