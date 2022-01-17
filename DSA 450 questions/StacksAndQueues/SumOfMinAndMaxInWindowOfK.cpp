#include<bits/stdc++.h>
using namespace std;

void solve(int arr[]  , int size = 7 , int k=4){
	int sum = 0;
	deque<int>minQ,maxQ;        // using deque 
	for(int i = 0 ; i<size ;i++){
		if(!minQ.empty() && minQ.front() == i-k ){        // this is the position for siliding the window ... when front element index is i-k
			minQ.pop_front();
		}
		if(!maxQ.empty() && maxQ.front() == i-k){
			maxQ.pop_front();
		}
		while(!minQ.empty() && arr[i] < arr[minQ.back()] ){    // poping larger element then the current element 
			minQ.pop_back();
		}
		while(!maxQ.empty() && arr[i] > arr[maxQ.back()]){ // poping smaller  element then the current element 
			maxQ.pop_back();
		}
		minQ.push_back(i);
		maxQ.push_back(i);
		
		if(i>= k-1){         // when we have computed the  1 window 
			sum +=  arr[minQ.front()] +  arr[maxQ.front()];
		}
	}
	cout<<sum ;
}

int main(){
	int arr[7] = {2,5,-1,7,-3,-1,-2} ;
	solve(arr);
	return 0; 
}
