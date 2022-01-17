
long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    int i = 0; 
    int j =n-1;
    int sum = 0;
    while(i<j){
        sum+= abs(arr[i] - arr[j]);
        sum+= abs(arr[i+1] - arr[j]);
        i++;
        j--;
    }
    sum+=abs(arr[0]-arr[i]);
    return sum;
}
