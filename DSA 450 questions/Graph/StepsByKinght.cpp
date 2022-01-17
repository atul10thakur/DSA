int minStepToReachTarget(vector<int>&knightPos,vector<int>&TargetPos,int N)
	{
	    int x1 = knightPos[0];
	    int y1 = knightPos[1];
	    int x2 = TargetPos[0];
	    int y2 = TargetPos[1];

        int board[1001][1001];

        if(x1 == x2 && y1 == y2){
            return 0;
        }

        for(int i = 0 ; i<N ; i++){
           for(int j = 0 ; j<N ; j++){
                board[i][j] = 0;
           }
        }

   queue<pair<int, int>>q;
   q.push({x1-1,y1-1});

    while (!q.empty())
    {
        auto cur = q.front();
        int i = cur.first;
        int j = cur.second;
        q.pop();

   // all possible location of knight
   if( (i+1) >=0 && (i+1) < N  && (j+2) >=0 && (j+2) < N && board[i+1][j+2] ==0  ){
         board[i+1][j+2] = 1;
         q.push({ i+1 , j+2 });
   }
   if( (i-1) >=0 && (i-1) < N  && (j+2) >=0 && (j+2) < N && board[i-1][j+2] ==0  ){
         board[i-1][j+2] = 1;
         q.push({ i-1 , j+2 });
   }
    if( (i-2) >=0 && (i-2) < N  && (j+1) >=0 && (j+1) < N && board[i-2][j+1] ==0  ){
         board[i-2][j+1] = 1;
         q.push({ i-2 , j+1 });
   }
   if( (i+2) >=0 && (i+2) < N  && (j+1) >=0 && (j+1) < N && board[i+2][j+1] ==0  ){
         board[i+2][j+1] = 1;
         q.push({ i+2 , j+1 });
   }
  
   if( (i-1) >=0 && (i-1) < N  && (j-2) >=0 && (j-2) < N && board[i-1][j-2] ==0  ){
         board[i-1][j-2] = 1;
         q.push({ i-1 , j-2 });
   }
   if( (i+1) >=0 && (i+1) < N  && (j-2) >=0 && (j-2) < N && board[i+1][j-2] ==0  ){
         board[i+1][j-2] = 1;
         q.push({ i+1 , j-2 });
   }
    if( (i-2) >=0 && (i-2) < N  && (j-1) >=0 && (j-1) < N && board[i-2][j-1] ==0  ){
         board[i-2][j-1] = 1;
         q.push({ i-2 , j-1 });
   }
    if( (i+2) >=0 && (i+2) < N  && (j-1) >=0 && (j-1) < N && board[i+2][j-1] ==0  ){
         board[i+2][j-1] = 1;
         q.push({ i+2 , j-1});
   }
    }
    
return board[x2-1][y2-1];
	}