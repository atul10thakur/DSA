#include<bits/stdc++.h>
using namespace std;

int aggressiveCow(int location , int cow  , int places[] , int totalPlaces){
	int low  = 0  , high = location -1;
	int ans = 0;
	while(low <= high ){ 
	int mid = (low+high) / 2;
		int prev = places[0];
		int c= 1;
		for(int i = 1 ; i<totalPlaces ; i++){
			if(places[i] - prev>= mid){
				prev = places[i];
				c++;
				if(c==cow) break;
			}
		}
		if(c==cow){
			ans = mid;
			low = mid+1 ; 
		}else{
			high  = mid - 1;
		}
	}
	return ans;
}

int main(){
	int places[] = {1,3,8,11,13,16};
	cout<<aggressiveCow(17 , 4 , places , 6);
	return 0;
}
