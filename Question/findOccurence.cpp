#include<bits/stdc++.h>
using namespace std;

void N_By_K_Ocucrence(int arr[], int size, int K){
       map<int , int>M;
       for(int i = 0 ; i<size ; i++){
           M[arr[i]]++;
       }
        for (auto it = M.begin(); it != M.end(); ++it)  {
          if(it->second > size/4){
              cout<<it->first<<" "<<it->second<<" ";
          }
       }
}

int main()
{
    int arr[8] = {3,1,2,3,3,1,2,2};
    N_By_K_Ocucrence(arr, 8 , 4);
     return 0;
     }