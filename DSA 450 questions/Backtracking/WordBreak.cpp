


vector<string> ans;  // for storing answer ... 
   void solve(string s , vector<string>dict  , string res){
    if(s.length() == 0){      // if string in 0 we find the word .... 
        ans.push_back(res);
        return ;
    }
       for(int i =0 ; i<s.length() ; i++){
            string left = s.substr(0 , i+1);    
            if(find(dict.begin() , dict.end() , left) != dict.end()){     // checking the letter or word present in dict 
                string right = s.substr(i+1);          // removing the part where string is not in dict
                if(i == s.length()-1){ 
                    solve(right , dict , res+left);          // calling the string from where its not present in the dict ..
                }else{
                     solve(right , dict , res + left  + " ");  // same  here ..
                }
              
                
            }   
        }
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {   
        string res = "";
        solve(s , dict ,res);
        reverse(ans.begin() , ans.end());
        return ans;
    }
