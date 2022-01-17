	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int r = grid.size();
	    int c = grid[0].size();
	    vector<vector<int>>ans(r,vector<int>(c,INT_MAX));          // stroing INT_MAX in place of 0's it means we have already count steps to make 1
	    queue<pair<int , int>>q;     // for row and col 
	    for(int i=0 ; i<r ; i++){
	        for(int j=0 ; j<c ; j++){
	            if(grid[i][j] == 1){
	                ans[i][j] =0;                // now if grid value is 1 making all 1's to 0 in ans vector
	                q.push({i,j});
	            }
	        }
	    }
	    while(!q.empty()){                 // for checking up down left right ...
	        int row = q.front().first;               
	        int col = q.front().second;
	        if((row-1)>=0 && ans[row][col]+1 < ans[row-1][col]){        // if we find value is from upward is larger then the current grid value that means
	            ans[row-1][col] = ans[row][col]+1;                   // count to make 0's to one in main vector is current value of grid +1
	            q.push({row-1 , col});      // pushing then newly formed 1's 
	        }
	        if((row+1)<r && ans[row][col]+1 < ans[row+1][col]){
	            ans[row+1][col] = ans[row][col]+1;
	            q.push({row+1 , col});
	        }
	        if((col-1)>=0 && ans[row][col]+1 < ans[row][col-1]){
	            ans[row][col-1] = ans[row][col]+1;
	            q.push({row , col-1});
	        }
	        if((col+1)<c && ans[row][col]+1 < ans[row][col+1]){
	            ans[row][col+1] = ans[row][col]+1;
	            q.push({row , col+1});
	        }
	        q.pop();
	    }
	    return ans;
	}
