#include<iostream>
using namespace std;

void LeftRotateBy90(int **arr,int row, int col){
	int r =0;
	int c = 0 ; 
	int temp[row][col];
	for(int i = 0; i< row ; i++){
		for(int j =col-1 ; j>=0 ; j--){
			temp[r][c] = arr[i][j];
			r++;
		}
		r = 0 ; c++;
	}
	
	for(int i = 0; i< row ; i++){
		for(int j =0 ; j<col ; j++){
			arr[i][j] = temp[i][j];
		}
	}
}

int main(){
	int count = 1;
	int **arr;
	arr = new int*[3];
	for(int i= 0; i< 3; i++){
		arr[i]= new int[3];
		for(int j =0 ; j<3; j++){
			arr[i][j] = count++;
		}
	}
	LeftRotateBy90(arr,3,3);
	for(int i = 0; i< 3 ; i++){
		for(int j =0 ; j<3; j++){
		cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
