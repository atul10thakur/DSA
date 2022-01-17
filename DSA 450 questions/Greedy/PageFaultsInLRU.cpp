


int pageFaults(int N, int C, int pages[]){
        unordered_set<int>s;   // for storing the pages from the pages array..
        unordered_map<int , int>m;  // stroing indexes of the pages ........
        int pgfault = 0;
        
        for(int i = 0 ; i<N ;  i++){
            if(s.size() < C){  // if the capacity of memory is not full ....
                if(s.find(pages[i]) == s.end()){   // check the element is already present of not
                    s.insert(pages[i]);      
                    pgfault++;
                }
             m[pages[i]]= i;   // update the page and its index.. index is used to check the least recently used page
            }
            else{
                if(s.find(pages[i]) == s.end()){   // capacity is full and the element is not present ...
                      pgfault++;
                      
                    int lru = INT_MAX;
                    int value = 0;
                  
                    for(auto it=s.begin() ; it!=s.end() ; ++it){    // check the least recently use acc. to the index store in Map "m" 
                        if(m[*it] < lru){       
                            lru = m[*it];     
                            value = *it;
                        }
                    }
                   s.erase(value);        // erase the element  ...
                   s.insert(pages[i]);   // insert the new page 
                    m[pages[i]] = i ;    // update the map with new index
                }
                m[pages[i]] = i ;  // capacity is full and the element is also present then just update the Map and its new index value ....
            }
        }
        return pgfault;
    }
