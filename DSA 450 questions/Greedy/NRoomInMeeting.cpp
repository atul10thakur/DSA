
 // just make pair of both array and the sorted that array according to the second num.
    // then just check pair of second val < pair of first value then count++


static bool myComp(pair<int , int>a , pair<int , int> b){
        if(a.second == b.second) return a.first < b.first;
        else return a.second < b.second ;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int ,int >>N(n);
        for(int k = 0 ; k< n; k++) N[k] = {start[k] ,end[k]};
        sort(N.begin() , N.end() , myComp);
         int i = 0 ;
         int j = 1 ;
         int c= 1;
         while(j<n){
             if(N[i].second < N[j].first){
                 c++;
                 i = j;
                 j++;
             }
             else{
                 j++;
             }
         }
        return c;
    }
