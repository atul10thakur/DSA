// CPP to design platform for maximum stoppage
#include <bits/stdc++.h>
using namespace std;

static bool comp( int arr[1][2] , int brr[1][2]){
	return arr[0][1] < brr[0][1] ; 
}

int maxStop(int arr[][3] , int totalTrains)
{
	
	vector<pair<int, int> > v[4];
	for(int i = 0 ; i<4 ; i++){
		v[i].push_back({-1 , -1});
	}
  for(int i = 0 ; i < 3 ; i++){
  	sort(arr[i].begin() , arr[i].end() , comp);
  }
  int count = 0 ;
  for(int i = 0 ; i<toatalTrains ; i++){
  	if(v[arr[i][2]].first == -1){
  	 v[arr[i][2]].push_back({arr[i][0] , arr[i][1]}); 
  	 count++;
	  }
	  else{
	  	if(v[arr[i][2]].second < arr[i][0] ){
	  		 v[arr[i][2]].push_back({arr[i][0] , arr[i][1]}); 
  	        count++;
		  }
	  }
  }
	
	return count;
}

// driver function
int main()
{
	int arr[m][3] = { 1000, 1030, 1,
					1010, 1020, 1,
					1025, 1040, 1,
					1130, 1145, 2,
					1130, 1140, 2 };
		<< maxStop(arr , 6);
	return 0;
}

