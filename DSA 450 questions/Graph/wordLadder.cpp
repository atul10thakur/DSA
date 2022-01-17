int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string>q;
        q.push(beginWord);
        unordered_set<string>word;
        int size = beginWord.size();
        for(int i=0 ; i<wordList.size();i++){
            word.insert(wordList[i]);
        }
        if(word.find(endWord) == word.end()) return 0;
        int len = 0;
        while(!q.empty()){
            len++;
            int qlen = q.size();
            for(int i=0 ; i<qlen; i++){
            string s = q.front();
            q.pop();
            for(int j = 0 ; j<size ; j++){
                 char ch =  s[j];
                for(char c = 'a' ; c<='z' ; c++){
                    s[j]=c;
                    if(s==endWord) return len+1;
                    if(word.find(s) == word.end()) continue;
                    word.erase(s);
                    q.push(s);
                    }
                s[j] = ch;
                }    
            }
        }
        return 0;
    }