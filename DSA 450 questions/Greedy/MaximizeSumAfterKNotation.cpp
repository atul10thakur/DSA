 
 
 // first sort array 
 // then flip elemnets to K times
 // check total sum;
 // find min elemet 
 // if value of K is not zero then 
 // if K == even do nothing because it will have no effect on sum...
 // if K == odd just do 2*min element   
 
 long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a , a+n);
        long long int sum = 0;
        for(int i = 0 ; i<n ; i++){
            if(a[i] < 0 && k>0){
                a[i] = -a[i];
                k--;
            }
        }
        for(int i = 0 ; i<n ; i++) sum+= a[i];
        
        int min = *min_element(a, a+n);
        if(k&1) sum -= 2*min;
        return sum;
    }
