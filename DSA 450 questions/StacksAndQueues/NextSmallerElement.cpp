#include<bits/stdc++.h>
using namespace std;


void solve(int arr[] , int size = 5){
	stack<pair<int ,int >>s;
	vector<int>ans;
	s.push({arr[0] , 0}) ;
	for(int i=1 ;i<size ; i++){
		while(!s.empty() && s.top().first > arr[i] ){
			ans[s.top().second] = arr[i];
			s.pop();
		}
		s.push({arr[i] , i});
			}
		while(!s.empty()){
			ans[s.top().second] = -1;
			s.pop();
		}
	for(int i=0 ; i<ans.size() ; i++){
 	cout<<ans[i]<<" ";
 }
}


int main(){
int arr[5] = { 4, 8, 5, 2, 25};
 
solve(arr);
 return 0;
}
