// INPUT ==> {3,4,2,1,2,1};
// OUTPUT ==> 2  , that is  3 then 4
// since 3 can takes 1 to 3 steps same for 4 it can take 1 to 4 steps so , 3 takes 1 step and 4 take 4 steps 
// therefore total steps = 3,4 == 2 

#include<bits/stdc++.h>
using namespace std;

int MinimumJumps(int arr[] , int n){
    int DP[n];
    DP[0] = 0;
    for(int i = 1 ; i <n  ; i++){
        DP[i] = INT_MAX;
    }
    for(int i = 1 ; i<n  ; i++){
        for(int j = 0 ; j<i ; j++){
            if(arr[j]+j >= i){
                if(DP[j] != INT_MAX){
                    DP[i] = min(DP[i] , DP[j]+1);
                }
            }
        }
    }
    return DP[n-1];
}

int main(){
    int arr[] = {3,4,2,1,2,1};
    cout<<MinimumJumps(arr, 6);
    return 0;
}