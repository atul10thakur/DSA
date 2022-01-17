

string smallestNumber(int S, int D){
        if( (9* D) < S) return "-1";
        string ans = "";
        for(int i = D-1 ; i >= 0 ; i--){    // from the last digit to first digit ...
            if(S > 9 ){     // check if digit from last can take 9 or not 
                ans = "9" + ans;
                S-= 9;
            }
            else{          // if sum is smaller then 9 .. 
                if( i ==0) {     // if we are in first digit place 
                    ans = to_string(S) + ans;
                }else{        
                    ans = to_string(S-1) + ans;       // if we are not in first digit place just place sum-1 element in that place 
                    i--;         
                    while(i>0){          // now place all the reaming digits with 0's except for first place ...
                        ans ="0"+ ans ;
                        i--;
                    }
                    ans ="1" + ans;     // now we are in 1st place ....
                    break;
                }
            }
        }
        return ans;
    }
