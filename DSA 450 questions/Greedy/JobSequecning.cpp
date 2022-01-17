 
 // sort in decreasing order acc. to the profit then just make Time array and
 // chekc whether the job already filled the place or not in Time array..
 
 static bool comp(Job a , Job b){
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n)   // here JOB is structure which have ( jobID , deadline,  profit)....
    { 
        sort(arr , arr+n , comp);
        bool Time[n] = {0};
        int day =  0 , profit = 0;
        for(int i = 0 ; i< n ; i++){
            for(int j =min(n , arr[i].dead - 1) ; j>=0 ; j--){     // since if deadline is dealine is = 3 then we can do it 0,1 or in 2 
                if(Time[j] == false){
                profit +=arr[i].profit ; 
                day+=1;
                Time[j] = true;
                break;
            }
            }
        }
        return {day , profit} ; 
    } 
