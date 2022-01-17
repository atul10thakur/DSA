#include<bits/stdc++.h>
using namespaces std;

    int solve(int arr[], int n , int m , int mid){
        int sum = 0 ;
        int stu  =  1 ;
        for(int i = 0 ; i< n ; i++){
            if(arr[i] > mid) return false;
            if(sum + arr[i] > mid){
                stu++;
                sum = arr[i];
                if(stu > m ) return false;
            }
            else{
                sum+=arr[i];
            }
        }
        return true;
    }
    
    
    int findPages(int arr[], int n, int m) 
    {
        int low = 0 ;
        int high = 0;
        int sum =0;
        int ans =0;
        for(int i = 0 ; i<n; i++){
        sum += arr[i];
        }
        high = sum;
        while(low <= high){
            int mid = (low +high) / 2;
            if(solve(arr, n , m , mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
int main(){ 
     int arr[] = { 12 , 34 , 67 , 90};
	cout<<findPages(arr, 4 , 2);
}
