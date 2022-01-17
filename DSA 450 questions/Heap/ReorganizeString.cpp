// I/P - aab  O/P - aba 
// I/p -aaab O/P- "" since there is no combination where no two ajecent char will not come together

#include<bits/stdc++.h>
using namespace std;
auto cmp = [&](pair<char , int> a, pair<char , int>b ){
	return a.second < b.second;
};

string reorganizeString(string s){
	unordered_map<char , int> m;
	for(char i : s){         // store all occurences of char.
		m[i]++;
		if(m[i] > (s.length()+1)/2) {
			return "";
		}
	}
	priority_queue<pair<char , int> , vector<pair<char,int>> ,  decltype(cmp)> pq(cmp);       // max heap of most count char.
	
	for(auto x : m){
		pq.push({x.first,x.second});
	}
	string S = "";
	while(pq.size() > 1){        // while the heap have two char.
		auto a = pq.top();
		pq.pop();
		auto b = pq.top();
		pq.pop();
		S+=a.first;
		S+=b.first;
		if(--a.second){        
			pq.push({a.first, a.second}) ;           // decrease the count of char . and again push 
		}
		if(--b.second){
			pq.push({b.first, b.second}) ;        // decrease the count of char . and again push 
		}
	} 
	if(!pq.empty()){                  // if there is only one element left 
		auto x = pq.top();
		if(x.second > 1){
			return "";
		} 
		S+= x.first;
	}
	return S;
}


int main(){
	
	string s = "aab";
string ans = reorganizeString(s);
cout<<ans;
	return 0;
}
