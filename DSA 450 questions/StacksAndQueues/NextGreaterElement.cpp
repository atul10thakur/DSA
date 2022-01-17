#include<bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(vector<int> arr, int n){
        vector<int> ans;
        for(int i = 0 ; i<n ; i++){
        	ans[i] = -1;
		}
        stack<int>s;
        s.push(0);
        for(int i = 1 ; i<n ;i++){
            if(arr[i] <= arr[s.top()]){
                s.push(i);
            }
            else{
               while(!s.empty() ||  arr[i] < arr[s.top()]){
                int index = s.top();
                s.pop();
                ans[index] = arr[i];
               }
            }
            s.push(i);
        }
        cout<<"asdas";
        return ans;
    }
    
    
 int main(){
 	vector<int>arr = {6,8,0,1,3}; 
 	vector<int> ans =  nextLargerElement(arr , arr.size());
 	for(int i = 0 ;i<5 ;i++){
 		cout<<ans[i]<<" ";
	 }
	 return 0;
 }  
