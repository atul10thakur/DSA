//nums = {2, 8, 5, 4}
//Output:
//1
//Explaination:
//swap 8 with 4.


#include<bits/stdc++.h>
using namespaces std;

int minSwaps(vector<int>&nums)
	{   
		int n = nums.size();
			     vector<pair<int,int>>v(n);
			    for(int i = 0 ; i<nums.size() ; i++){
			        v[i] = {nums[i] , i};
			    }
			    sort(v.begin() , v.end());
			    	int count = 0;
			for(int i = 0; i<nums.size() ; i++){
			    if(v[i].second == i){
			        continue ;
			    }
			    else{
			        count++;
			        swap(v[i] , v[v[i].second]);
			        i--;
			    }
			}
			return count;
	}

int main(){
	int arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
	minSwaps(arr, 9);
	return 0;
}
