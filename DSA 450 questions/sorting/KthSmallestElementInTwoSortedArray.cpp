#include<bits/stdc++.h>
using namespace std;

int SmallestElement(int a[] , int b[] , int m , int n, int k){
	if(m > n ){
		return SmallestElement(b , a , n , m , k);
	}
	int low  = max(0 , k-n);
	int high = min( k , m);
	while(low <= high){
		int mid1 = (low + high)/2;
		int mid2 = k-mid1;
		int l1 = mid1 == 0 ? INT_MIN : a[mid1-1];
		int l2 = mid2 == 0 ? INT_MIN : b[mid2-1];
		int r1 = mid1 == m ? INT_MAX : a[mid1];
		int r2 = mid2 == n ? INT_MAX : b[mid2];
	
	if(l1 <= r2 && l2 <=r1){
		return max(l1 , l2);
	}
	else if(l1 > r2){
        high = mid1-1;		
	}
	else{
		low = mid1+1;
	}
	}
	return 1;
}

int main(){
	int a[] = {2, 3, 6, 7, 9};
	int b[] = {1, 4, 8, 10} ;
cout<<SmallestElement(a, b , 5 , 4 , 5);
	return 0;
}
