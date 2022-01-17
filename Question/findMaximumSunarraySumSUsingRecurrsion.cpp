#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int low, int high)
{
     int mid = low + high / 2;
   if(mid == 0){
     return arr[0];
   }
   
    maxSum(arr, low, mid);
    maxSum(arr, mid+1, high);
    int leftSum = 0;
    int rightSum = 0;
    int crossingSum = 0;
    int sum = 0;
    for(int i = mid+1; i<=high; i++){
        sum += arr[i];
        rightSum = max(rightSum , sum);
    }
    sum = 0;
     for(int i = mid ; i>=0 ; i--){
        sum += arr[i];
        leftSum = max(leftSum , sum);
    }
    int ans = max(leftSum ,rightSum+leftSum );
    return max(rightSum +leftSum, ans);
}

int main()
{
    int arr[] = {-2, -5, 6, -2, -3, 5, -6};
    cout << maxSum(arr, 0, 6);
    return 0;
}