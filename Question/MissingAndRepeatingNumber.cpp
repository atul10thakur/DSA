#include<bits/stdc++.h>
using namespace std;

void MissingAndRepeatingNumber(int arr[], int n)
{
		int a , b ;
        for(int i = 0 ; i<n ; i++){
            if(arr[abs(arr[i])-1]<0){
                a= abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1] ;
            }
        }
        for(int i =0 ; i<n ; i++){
            if(arr[i] > 0){
                b = i+1;
                break;
            }
        }
        cout<<"reapting .. "<<a<<"\n";
        cout<<"missing.."<<b;
    }
int main(){
	
	int arr[] = {2,4,1,2,5};
MissingAndRepeatingNumber(arr, 5);
	return 0;
}
