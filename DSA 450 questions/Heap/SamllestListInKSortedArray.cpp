class Solution{
    public:
    class element{
        public:
        int val, idx , row ;
        element(int v , int i , int r){
            val = v;
            idx = i ;
            row= r;
        }
    };
    
    struct cmp{
        bool operator()(element a , element b){
            return a.val > b.val;
        }
    } ;
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          int mn=INT_MAX, mx=INT_MIN,range=INT_MAX;
          priority_queue<element, vector<element> , cmp >pq;
          for(int i =0 ; i<k ; i++){
              pq.push(element(arr[i][0] , 0 , i ));
              mn=min(mn,arr[i][0]);
              mx=max(mx,arr[i][0]);
          }
          int high , low;
          while(!pq.empty()){
              element temp = pq.top();
              pq.pop();
              int mbm = temp.val;
              if(range > mx-mbm){
                  mn= mbm;
                  range = mx-mn;
                  low = mn;
                  high = mx;
              }
              if(temp.idx == n-1){
                  break;
              }
              temp.idx+=1;
              pq.push(element(arr[temp.row][temp.idx] , temp.idx , temp.row));
              mx = max(mx,arr[temp.row][temp.idx]);
          }
          return {low , high};
    }
};
