#include<bits/stdc++.h>
using namespace std;
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>>res;
    unordered_map<string,vector<string>>m;
        for(int i = 0 ; i<str.size() ;i++){
              string temp = str[i];
               sort(str[i].begin() , str[i].end());
             if(m.find(str[i]) != m.end()){
                   m[str[i]].push_back(temp);  
             }
        }
        for(auto it = m.begin() ; it != m.end() ; it++){
            res.push_back(it->second);
        }
        return res;
    }
int main()
{ 
 return 0; 
}