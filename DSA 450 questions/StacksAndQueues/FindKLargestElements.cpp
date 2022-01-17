#include<bits/stdc++.h>
using namespace std;


vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>ans;
	    priority_queue<int , vector<int> , greater<int>>minQ;
	    for(int i =0 ; i<n ; i++){
	        minQ.push(arr[i]);
	    }
	    int i = 0 ;
	    while(i<n-k){
	        minQ.pop();
	        i++;
	    }
	    while(!minQ.empty()){
	        ans.push_back(minQ.top());
	        minQ.pop();
	    }
	    reverse(ans.begin() , ans.end());
	    return ans;
	}

int main(){
	int arr[] = {12, 5, 787, 1, 23};
	int size = sizeof(arr)/sizeof(arr[0]);
	kLargest(arr, size , 4);
	return 0;
}	
