#include<bits/stdc++.h>
using namespace std;
#define N 9

  
   bool checkIsValid(int grid[N][N] , int i , int j , int val , int size)
   {  
       for(int r =0 ; r<size ; r++){
           if(grid[r][j] == val){
               return false;
           }
       }
       for(int c =0 ; c<size ; c++){
           if(grid[i][c] == val){
               return false;
           }
       }
       int si = i/3 * 3;
       int sj = j/3 * 3;
       for(int i = 0 ; i<3 ; i++){
           for(int j = 0 ; j< 3 ; j++){
              if( grid[i+si][j+sj] = val){
                  return false;
              }
           }
       }
       return true;
   }
   
    void solve( int grid[N][N] , int r , int c , int size){
        if( r == size ){
            return ;
        }
        
        int nextRow = 0;
        int nextCol = 0;
        
        if(c  == size -1){
            nextRow++;
            nextCol = 0;
        }else{
            nextCol++;
        }
        if(grid[r][c] !=0){
            solve(grid  , nextRow ,nextCol , size);
        }else{
            for(int i =1 ; i<=9 ; i++){
                if(checkIsValid(grid,r,c, i , size) == true){
                    grid[r][c] = i;
                    solve(grid,nextRow , nextCol , size);
                    grid[r][c] = 0;
                }
            }
        }
    }
    
    bool SolveSudoku(int grid[N][N])  
    { int size = N;
        int startCol =0;
        int startRow = 0;
        solve(grid , startRow , startCol , size);
        for(int i = 0 ; i <9 ; i++){
        	for(int j =0 ; j<9 ; j++){
        		cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
    }
    
    int main(){
    	int grid[N][N] =  {
    		{3 , 0  , 6 , 5 , 0 , 8 , 4 ,  0 ,  0},
            {5 , 2  , 0 , 0 , 0 , 0 , 0 ,  0 ,  0},
            {0 , 8  , 7 , 0 , 0 , 0 , 0 ,  3 ,  1},
            {0 , 0  , 3 , 0 , 1 , 0 , 0 ,  8 ,  0},
            {9 , 0  , 0 , 8 , 6 , 3 , 0 ,  0 ,  5},
            {0 , 5  , 0 , 0 , 9 , 0 , 6 ,  0 ,  0},
            {1 , 3  , 0 , 0 , 0 , 0 , 2 ,  5 ,  0},
            {0 , 0  , 0 , 0 , 0 , 0 , 0 ,  7 ,  4},
            {0 , 0  , 5 , 2 , 0 , 6 , 3 ,  0 ,  0}							
		} ;
		
		SolveSudoku(grid);
		
	 return 0;
	}
