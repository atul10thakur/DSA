#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Sum(int arr[] , int size){
    sort(arr,arr+size);
    vector<vector<int>>res;
    int low , high , sum ;
   for(int i = 0 ; i<size-2 ; i++){
       if(i ==0 || (i>0 && arr[i] != arr[i-1] ) ){
         low = i+1 , high = size-1 , sum = 0-arr[i];
         while(arr[low] < arr[high]){
            if(arr[low] + arr[high] == sum){
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[low]);
                temp.push_back(arr[high]);
                res.push_back(temp);
            
            while( low < high && arr[low] == arr[low+1]){
                low++;
            }
            while( low < high && arr[high] == arr[high-1] ){
                high--;
            }
            low++;
            high--;
            }
            else if( arr[low]+ arr[high] < sum){
                low++;
            }
            else{
                high--;
            }
         }
       }
   }
   return res;
}
int main()
{  int arr[] = {-1,-1,-4,2,0,1};
   vector<vector<int>>res = Sum(arr , 6);
   for(int i = 0 ; i < res.size() ; i++){
       for(int j = 0 ; j < res[i].size() ; j++){
           cout<<res[i][j]<<" ";
       }
       cout<<'\n';
   }
    
 return 0; 
}