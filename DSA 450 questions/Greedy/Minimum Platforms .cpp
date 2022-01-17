 
 // first amke pair and sort array acc. to arrival time.. then 
 // first method create a priority queue of min and store pair of (dep , no.Ofplatform);
 // now check if arival < top of queue.dep then make another pair and increment  no.Ofplatform
 // and if arr > top of queue.dep replace with new arrival ..
 
 
 
 // in this just sort both arrival and depature indiviually ..
 // and check if arr < dep increment plactform if not ince. dep and arr.
 int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr ,  arr+n);
    	sort(dep , dep+n);
    	int ans = 1;
    	int i =1 ;
    	 int   =0 ;
    	 while(i<=n){
    	     if(arr[i] < dep[j]){
    	         ans++;
    	     }
    	     else{
    	       j++;  
    	     }
    	     i++;
    	 }
    	 return ans;
    }
