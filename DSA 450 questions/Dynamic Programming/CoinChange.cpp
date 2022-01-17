  long long int dp[1000][1000];
  long long int solve( int s[] , int m ,int n){
      if( m == -1 && n>0){    // if there is no coin and sum is not zero
          return 0;
      }
      if(n == 0){         // if sum is zero and there is atleast one solution
          return 1;
      }
      if(n < 0 ){       // if somehow sum of coins is less then zero 
          return 0;
      }
      if(dp[m][n] != -1) {       // if dp[m][n] contain solution already the just return that solution 
          return dp[m][n];
      }
             // solve(s,m-1,n) reduce coin values but not the sum beacuse coin value is larger then the sum  
             // solve(s,m,n-s[m]) reduce the sum but not coin since coins are unlimited we can use the same coin again 
      return dp[m][n] = solve(s,m-1,n) + solve(s,m,n-s[m]);   
  }
  
  // S ---> array , m --> number of coins , n --> sum to be formed
    long long int count(int S[], int m, int n) {     
    dp[m][n+1];
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<=n ; j++){
            dp[i][j] = -1;
        }
    }
    return solve(S,m-1,n); // starting from the last coin 
    }