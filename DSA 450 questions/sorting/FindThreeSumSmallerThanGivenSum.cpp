//Input: N = 4, X = 2
//arr[] = {-2, 0, 1, 3}
//Output:  2 .ie. (-2, 0, 1) and (-2, 0, 3)

#include<bits/stdc++.h>
using namespace std; 

void FindThreeSum(int arr[] , int size , int sum){
	sort(arr, arr+n);
	int res = 0;
	    for(int i = 0 ; i<n ; i++){
	        int left = i+1 , right = n-1;
	        while(left<=right){
	            int new_sum = arr[left]+arr[right]+arr[i];
	            if(new_sum < sum){
	                res += right - left;
	                left++;
	            }else{
	                right--;
	            }
	        }
	    }
	    return res;
}

int main(){
	int arr[] = {-2, 0, 1, 3} ;
	count<<FindThreeSum(arr , int )
	return 0;
	
}
