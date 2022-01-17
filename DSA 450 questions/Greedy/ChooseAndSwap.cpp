   
   // store all the char. in Set for increasing order char.
   
    string chooseandswap(string a){
        set<char>s;
        for(int i = 0 ; i<a.length() ; i++) s.insert(a[i]);
        for(int i = 0  ; i<a.length() ; i++){
            s.erase(a[i]);  // now  erase the char from set 
            if(s.empty()) break;
            char ch1 = *s.begin();  // give the smaller value in set
            if(ch1 < a[i]){
            char ch2 = a[i];     
            for(int j = 0 ; j<a.length() ; j++){    // now just replacing the values ....
                if(a[j] == ch1) a[j] = ch2;
                else if(a[j] == ch2) a[j] =ch1;
            }
            break;
            }
        }
        return a;
    }
