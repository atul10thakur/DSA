 
 // each section elemets take +1 count  for reaping so whenever their is new section count++;
 
 int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>>q;
        int row = grid.size();
        int col = grid[0].size();
        for(int i =0 ; i<row ; i++){
            for(int j=0; j<col ; j++){         
                if(grid[i][j] ==2){
                    q.push({i,j});          // pushing all row and col whose index value is 2
                }
            }
        }
        int count =0;
        q.push({-1,-1}) ;            // -1,-1 as  delimeter so that it will differentiate different sections
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            if( i == -1 && j== -1 && q.size() ==1){          // if we find delimter and their is only one element that is delimter itself
                q.pop();
                break;
            }
        else if(i == -1 && j== -1 && q.size() > 1){        // if we find delimter but there are some more elements that is there is some other section alos
            count++;                              // now we have to increase the count 
            q.pop();
            q.push({-1,-1});          // and put delimter end of section 
        }
        else{                    // if we find element other then delimter  and cheking for all possible direction up. down , left ,right
            if((i-1)>=0 && grid[i-1][j] == 1){        // up 
                grid[i-1][j] = 2;     // reaping the up  element
                q.push({i-1, j});          // pushing the new element since its index value is 2
            }
            if((i+1)<row && grid[i+1][j] == 1){   // down
                grid[i+1][j] = 2;
                q.push({i+1, j});   // same thing  as above 
            }
            if((j-1)>=0 && grid[i][j-1] == 1){       // left 
                grid[i][j-1] = 2;
                q.push({i, j-1});
            }
            if((j+1)<col && grid[i][j+1] == 1){   // right 
                grid[i][j+1] = 2;
                q.push({i, j+1});
            }
            q.pop();         // poping element after reaping the element 
        }
        } 
        for(int i =0 ; i<row ; i++){   // checking whether there is element left which can not be reaped 
            for(int j=0; j<col ; j++){
                if(grid[i][j] ==1){
                    return -1;
                }
            }
        }
        return count;        // if all elements are reaped returning count ...
    }
