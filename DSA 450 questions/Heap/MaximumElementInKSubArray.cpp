#include<bits/stdc++.h>
using namespace std;

void maxElement(int arr[] , int size = 9 , int k=3){
	deque<int>q;
	int i;
	for(i=0 ; i<k; i++){
		while(!q.empty() && arr[i] >= arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(; i<size ; i++){
		cout<<arr[q.front()];
		if(!q.empty() && q.front() <= i-k){
			q.pop_front();
		}
		while(!q.empty() && arr[i] >= arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	cout << arr[q.front()]; 
}


int main(){
	int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6} ;
	 maxElement(arr);
}
