#include<iostream>
using namespace std;


// this function check wheter we can place queen or not 
bool check( int **arr, int r , int c , int n){

   for(int row = 0 ; row<r ; row++){         
   	if(arr[row][c] == 1){              // check for each row 
   		return false;
	   }
   }
   
   int row = r  , col = c;
   while(row >=0 && col>= 0){        // check if any queen is present left diagonally upwards ...
   	if(arr[row][col] == 1){
   		return false;
	   }
   	row--;
   	col-- ;
   }
   
   row = r , col = c;
 while( row >=0 && col<n)         // check if any queen is present right diagonally upwards ...
 {
 	if(arr[row][col] == 1){
 	return false;
 }
  row--;
  col++;
 }
 return true;
  }
  
 bool NQueen(int **arr , int r , int n){
 	if(r>=n){
 		return true;
	 }
	 
	 for(int col = 0 ; col<n ; col++){
	 	if(check(arr , r, col, n))
	 	   {
	 	   	 arr[r][col] = 1;
	 	    
	 		if(NQueen(arr,r+1 , n)){
	 			return true;
			 }
			 arr[r][col] = 0;
			}
		 }
		 return false;
	 }


int main(){
	int n ;
	cout<<"size : ";
	cin>>n;
	int **arr = new int *[n];
	for(int i = 0  ; i <n ; i++){
		arr[i] = new int[n];
		for(int j = 0 ; j<n ; j++){
			arr[i][j] =0;
		}
	}
	if(NQueen(arr , 0 , n))    // calling from 1st row to nth rows ... 
	{
			for(int i = 0  ; i <n ; i++){
		for(int j = 0 ; j<n ; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	}else cout<<"can put queens..";
	
	return 0;
}

















