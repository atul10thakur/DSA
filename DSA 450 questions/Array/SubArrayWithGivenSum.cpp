#include<iostream>
#include<unordered_set>
using namespace std;

bool GivenSum(int a[] , int sum, int size){
	int preSum = 0;
	unordered_set<int>un;
	for(int i =0 ; i<size ; i++){
		preSum += a[i];
	
	if(preSum == sum){
		return true;
	}
	if(un.find(preSum-sum)!=un.end()){
		return true;
	}
	un.insert(preSum);
	}
	return false;
}

int main(){

	int a[6] = {5,8,6,13,3,-1};
	cout<<GivenSum(a,22,6);
	return 0;
}
