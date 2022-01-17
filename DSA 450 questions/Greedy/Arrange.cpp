
// store array in deacreasing order since the higher no. will become the power of next number 

vector<int> arrange(int arr[]  int size){
	int countOnes = 0;
	vector<int>ans = 0;     
	for(int i =0 ; i<size ; i++){      // since power of one is 1 so checking no. one
		countOnes++;
	}
	sort(arr , arr+n , greater<int>());
	  for(int i =0 ; i<countones ; i++) ans.push_back(1);    // storing 1's in ans first since it will give wrong ans if if store 1's 
	  
	if(n-countOnes == 2 && arr[0] == 3 && arr[1] == 2){    // same for the case of 3,2  not for 2,3 and only if their is 1's and 2,3 and no ther number
	ans.push_back(arr[1]);
	ans.push_back(arr[0]);
	}
	else{
		for(int i = 0 ; i < n - countOnes ; i++){      // now store the reaming number in decreasing order .......
			ans.push_back(arr[i]) ; 
		}
	}
	return ans;
}
