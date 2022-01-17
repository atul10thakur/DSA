
//int N = 7, int  K = 23
// A[] = {10,2,3,4,5,7,8}
// Output: 2 3 8 10  , 2 4 7 10  , 3 5 7 8 $


#include<bits/stdc++.h>
using namespace std;


void FourSum(int arr[], int size ,int k ) {
        // Your code goes here
        sort(arr , arr+size);
        vector<vector<int> >res;
        for(int i = 0 ; i<size ; i++){
            for(int j= i+1 ;j<size ; j++){
                int new_k = k-arr[i]-arr[j] ;
                int left = j+1;
                int right = size-1;
                while(left<right){
                    int sum = arr[left]+arr[right];
                    if(sum > new_k){
                        right--;
                    }
                    else if(sum < new_k){
                        left++;
                    }
                    else{
                        vector<int>ans(4,0);
                        ans[0] = arr[i];
                        ans[1] = arr[j];
                        ans[2] = arr[left];
                        ans[3] = arr[right];
                        res.push_back(ans);
                        
                        while(left < right && arr[left] == ans[2]) ++left;
                        while(left < right && arr[right] == ans[3]) --right;
                    }
                }
                while(j+1 < size && arr[j+1] == arr[j]) ++j;
            }
            while(i+1 < size && arr[i+1] == arr[i]) ++i;
        }
        for(int i = 0 ; i<res.size() ; i++){
        	for(int j = 0 ; j < 4 ; j++){
        		cout<<res[i][j]<<" ";
			}
			cout<<'\n';
		}
    }

int main(){
 int A[] = {10,2,3,4,5,7,8} ;
 FourSum(A , 7 , 23);
return 0;
}
