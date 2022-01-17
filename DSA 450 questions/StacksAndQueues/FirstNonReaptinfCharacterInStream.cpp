	
	// I/P -- "aabc"  O/P -- "a#bb" here since b is first non reapting char. that is why is do not print c 
	// I/P -- "aacb"  O/P -- "a#cc"   
		
	string FirstNonRepeating(string s){
		    vector<char>v;             // store in what order char. are appered ..
		    vector<int>vis(26,0);     // store occurrences of char.
		    string ans=""; 
		    for(int i =0 ; i<s.length() ; i++){
		      if(!vis[s[i]-'a']){
		          v.push_back(s[i]); // store order of char. 
		      }
		       vis[s[i]-'a'] ++;      // increament char.
		      int f = 0;
		      int size = v.size();
		     
		      for(int j=0 ;j<size ;j++ ){
		          if(vis[v[j] -'a' ] ==1){   // this means char. appeared only one time
		              ans.push_back(v[j]);      // push in ans
		              f= 1;
		              break;
		          }
		      }
		       if(f ==0 ){       // if char. appear more than 1 time
		              ans.push_back('#');
		          }
		    }
		    return ans;
		}
