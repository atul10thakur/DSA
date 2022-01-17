#include<bits/stdc++.h>
using namespace std;


class element{
	public:
	int value, row ,index;
	element(int v , int x , int n){
		value = v;
		index = x;
		row = n;
	}
};

struct compare {
	bool operator() (element a , element b){
		return a.value > b.value;
	}
};

int main(){
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}} ; 
	priority_queue<element , vector<element> , compare>pq;
	for(int i=0 ;i<3 ;i++){
		element temp(arr[i][0] , 0 ,i );
		pq.push(temp);
	}
	vector<int>ans;
	while(!pq.empty()){
		element x = pq.top();
		pq.pop();
		ans.push_back(x.value) ;
		if(x.index < 3-1){
			int r = x.row;
			int i = x.index;
			int v = x.value;
			
			element temp(v,i,r);
			pq.push(temp);
		}
	}
	for(int i=0 ; i<9 ;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

