 vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies , candies+N);
        int ma =0 ;
        int mn = 0;
        int i =0 ;
        int j = N-1;
        while(i<= j){
            mn+= candies[i];
            i++;
            j =j-K;
        }
        reverse(candies , candies+N);
        i =0;
        j = N-1; 
        while(i<= j){
            ma+= candies[i];
            i++;
            j =j-K;
        }
        return { mn ,  ma} ; 
    }
