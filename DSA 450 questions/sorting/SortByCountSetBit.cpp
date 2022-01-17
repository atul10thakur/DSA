//
//arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
//Output:
//15 7 5 3 9 6 2 4 32
//Explanation:
//The integers in their binary
//representation are:
//15 - 1111
//7  - 0111
//5  - 0101
//3  - 0011
//9  - 1001
//6  - 0110
//2  - 0010
//4  - 0100
//32 - 10000
//hence the non-increasing sorted order is:
//{15}, {7}, {5, 3, 9, 6}, {2, 4, 32}


#include<bits/stdc++.h>
using namespaces std;

static bool myComp(int a , int b){
        return __builtin_popcount(a) > __builtin_popcount(b) ;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
       stable_sort(arr ,arr+n , myComp);
    }

int main(){
	int arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
	sortBySetBitCount(arr, 9);
	return 0;
}
