vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int K) {
                       
    vector<long long>ans;
    queue<long long>q;
    for(int i=0 ; i<K-1 ; i++){
        if(arr[i] < 0){
            q.push(arr[i]);  // storing all negative numbers in queue
        }
    }
    for(int i =K-1 ;i<N ;i++){
        if(arr[i] <0) q.push(arr[i]);                      
        if(!q.empty()){            
            ans.push_back(q.front()) ;     
            if(q.front() == arr[i-K+1]){     // deleting the previous negative number from th queue
                q.pop();
            }
        }else{
            ans.push_back(0);       // if queue is empty that means all window element is positive ..
        }
    }
    return ans;
 }
