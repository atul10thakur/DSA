#include<iostream>
using namespace std;

int lameudoPartition(int a[] , int low , int high){
	int i =low-1;
	for(int j= low ; j<=high ; j++){
		if(a[j]<=a[high]){
			i++;
		swap(a[i],a[j]);  
		}
	} 
	swap(a[i+1],a[high]);
	return i+1;
}
int Kth(int a[] , int size ,int k)    // smallest Kth elemnts........ 
 {    
 	int l =0 ;
	int r =size-1; 
	if(l==r){
	    if(l==k){
	    return 	a[part];
		}	
	}
 else{
 	int part = lameudoPartition(a,l,r);
 	if(part>k){
 		return 
	 }
 }
 }

int main(){
	int a[] = {10,4,5,8,11,6,26};
	 cout<<Kth(a,7,5)<<"\n";
 	// cout<<lameudoPartition(a,0,5)<<"\n";
	for(int i =0 ; i<7 ; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
