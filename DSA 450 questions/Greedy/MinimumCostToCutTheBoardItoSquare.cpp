

int MinimumCuts(int row[3] int col[4] , int r, int c ){
	sort(row,row+r);
	sort(col , col+c); 
	
	int horizontal_count = 1 ;
	int vertical_count =1 ;
	
	int ans=0;
	 int i = 0; 
	 int j = 0;
	 
	while(i<r && j<c){
		if(row[i] < col[i]){
			ans =+ row[i]*  vertical_count;
			 vertical_count++;
			 i++;
		}
		else{
			ans =+ row[i]* horizontal_count;
			 horizontal_count++;
			 j++;
		}
	}
	while( i < r){
		ans =+ row[i]*  vertical_count;
			 vertical_count++;
			 i++;
	}
	while( j < c){
			ans =+ row[i]* horizontal_count;
			 horizontal_count++;
			 j++;
	}
}
