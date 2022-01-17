 
 
 
 // first stores the fraction values of value/ weight in V 
 double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double , int>>v;
        for(int i = 0 ; i< n; i++){
            double x = (arr[i].value*1.0 )/ (arr[i].weight*1.0 ) ;
            v.push_back({x,i});   // storing (ration , index) ......
        }
        sort(v.begin() , v.end() ,greater<pair<double, int>>());
  
    int S= 0;
    double ans = 0;
        for(int i = 0 ; i<n ; i++){
            if(S+arr[v[i].second].weight < W)  // just check whether weight is greater than the weight given....
            {
                ans += arr[v[i].second].value;
            S+= arr[v[i].second].weight;
            }
            else{
            double x= (W-S)*1.0;     // if weight become greter than given weight then just use the ration value from the v ...
            ans += (v[i].first * x);
            break;
        }
        }
        
        return ans;
    }
