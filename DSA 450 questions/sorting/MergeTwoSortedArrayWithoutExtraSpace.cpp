//arr1[] = {1, 3, 5, 7}
//arr2[] = {0, 2, 6, 8, 9}
//Output: 0 1 2 3 5 6 7 8 9

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[] , int arr2[] , int n , int m){
    
	    int i = 0 , j = 0 , k =n-1;
	    while(i<=k && j<m){
	        if(arr1[i]<arr2[j]){
	            i++;
	        }
	        else{
	           swap(arr2[j++] , arr1[k--]);
	        }
	    }
	    sort(arr1 , arr1+n);
	    sort(arr2 , arr2+m);
}

int main(){
	int arr1[] = {1, 3, 5, 7} ;
    int arr2[] = {0, 2, 6, 8, 9} ; 
    merge(arr1,arr2 , 4 , 5);
	return 0;
}
