int celebrity(vector<vector<int> >& arr, int n) 
    {
        int in[n] = {0};           // how much people know him 
        int out[n] = {0};      // how much people he know 
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(arr[i][j] == 1){       // this means people know him
                    in[j]++;             
                    out[i]++;
                }
            }
        }
        for(int i = 0 ; i< n ;i++){
          if(in[i] == n-1 && out[i] ==0){          // if all people know him and he dont know any people they he is celebrity .....
              return i;
          }    
        }
        return -1;
    }
    
    
     int celebrity(vector<vector<int> >& arr, int n) 
    {
        int celeb=0;                // assuming celeb is actually celebrity ...
        for(int i = 0 ; i<n ; i++){
            if(arr[celeb][i] == 1){          // if celeb knows someone then he is not celebrity ....
                celeb  = i;              // therefore the other can be celebrity 
            }
        }
        for(int i= 0 ; i<n ; i++){
            if(i != celeb && (arr[celeb][i] == 1 || arr[i][celeb] == 0 )) return -1;      // checkng the celeb know someone or not or people know celeb or not
        }
        return celeb;
    }
