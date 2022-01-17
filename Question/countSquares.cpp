#include<bits/stdc++.h>
using namespace std;

int countSquares(int num){
    int low = 1 ,  high = num-1 , mid , ans;
    if(num ==0 || num == 1){
        return num;
    }
    while(low <= high){
        mid = (low+high)/2;
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid < num){
            low = mid+1;
            ans = mid;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int num = 9;
    cout<<countSquares(num);
    return 0;
}